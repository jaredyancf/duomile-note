# 加载 MySQL .NET 连接器（路径根据实际情况修改）
Add-Type -Path "D:\MySQL\MySQL Connector NET 9.4\mysql.data.dll"

# 数据库连接信息
$config = @{
    Server   = "localhost"
    Database = "my_sb_demo"
    Username = "root"
    Password = "123456"
    Port     = 3306
}

# 构建连接字符串
$connectionString = "server=$($config.Server);port=$($config.Port);database=$($config.Database);uid=$($config.Username);pwd=$($config.Password);SslMode=None"
$connection = New-Object MySql.Data.MySqlClient.MySqlConnection($connectionString)

try {
    # 打开连接
    $connection.Open()
    Write-Host "已连接到数据库: $($config.Database)`n"

    # 1. 创建表（若不存在）
    $createTableSql = @"
    CREATE TABLE IF NOT EXISTS products (
        id INT PRIMARY KEY AUTO_INCREMENT,
        name VARCHAR(100) NOT NULL,
        price DECIMAL(10,2),
        created_at DATETIME DEFAULT CURRENT_TIMESTAMP
    )
"@
    $command = New-Object MySql.Data.MySqlClient.MySqlCommand($createTableSql, $connection)
    $command.ExecuteNonQuery()
    Write-Host "表 'products' 已创建或已存在"

    # 2. 插入数据
    $insertSql = "INSERT INTO products (name, price) VALUES (@name, @price)"
    $command = New-Object MySql.Data.MySqlClient.MySqlCommand($insertSql, $connection)
    
    # 添加参数（防止 SQL 注入）
    $command.Parameters.AddWithValue("@name", "笔记本电脑") | Out-Null
    $command.Parameters.AddWithValue("@price", 5999.99) | Out-Null
    $rowsAffected = $command.ExecuteNonQuery()
    Write-Host "`n插入了 $rowsAffected 行数据"

    # 3. 查询数据
    $selectSql = "SELECT id, name, price, created_at FROM products"
    $command = New-Object MySql.Data.MySqlClient.MySqlCommand($selectSql, $connection)
    $reader = $command.ExecuteReader()

    Write-Host "`n查询结果："
    while ($reader.Read()) {
        $id = $reader.GetInt32(0)
        $name = $reader.GetString(1)
        $price = $reader.GetDecimal(2)
        $date = $reader.GetDateTime(3)
        Write-Host "ID: $id, 名称: $name, 价格: $price, 创建时间: $date"
    }
    $reader.Close()

    # 4. 更新数据
    $updateSql = "UPDATE products SET price = @newPrice WHERE name = '笔记本电脑'"
    $command = New-Object MySql.Data.MySqlClient.MySqlCommand($updateSql, $connection)
    $command.Parameters.AddWithValue("@newPrice", 5499.99) | Out-Null
    $rowsAffected = $command.ExecuteNonQuery()
    Write-Host "`n更新了 $rowsAffected 行数据"

    # 5. 删除数据（示例，实际谨慎操作）
    $deleteSql = "DELETE FROM products WHERE id = @id"
    $command = New-Object MySql.Data.MySqlClient.MySqlCommand($deleteSql, $connection)
    $command.Parameters.AddWithValue("@id", 1) | Out-Null
    $rowsAffected = $command.ExecuteNonQuery()
    Write-Host "删除了 $rowsAffected 行数据"

}
catch {
    Write-Host "`n操作失败: " $_.Exception.Message
}
finally {
    # 关闭连接
    if ($connection.State -eq 'Open') {
        $connection.Close()
        Write-Host "`n连接已关闭"
    }
}
