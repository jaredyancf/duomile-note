# 安装 NuGet 提供程序（首次运行需要）
Install-PackageProvider -Name NuGet -MinimumVersion 2.8.5.201 -Force

# 安装 MySQL 连接器（兼容 .NET Core）
Install-Module -Name MySql.Data -Force
