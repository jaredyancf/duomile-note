import turtle as t
turtle.pencolor("#00F81E")
#设置画笔颜色
turtle.bgpic("1111.png")
turtle.pensize(10)#粗细
turtle.setheading(0)
#设置方向 0右，逆时针
turtle.forward(100)#前进
turtle.goto(0, 0)#移到指定的坐标
turtle.penup()#抬笔      
turtle.pendown()#落笔
turtle.left(90)#画笔左转？度
turtle.right(90)# 画笔右转，顺时针旋转
turtle.speed(0)# 画笔速度，最快是0最慢是1
turtle.setup()
#width：设置窗口宽度
#height:设置窗口长度
#startx:设置窗口距离屏幕左边多少像素None表示居中
#starty:设置窗口距离屏幕上边多少像素None表示居中
turtle.setup(width=200, height=200, startx=None, starty=None)
turtle.circle(100)#画一个首尾相接的图形
#第一个参数：半径
#第二个参数：角度
#第三个参数：边数
turtle.color()#设置所有的颜色
turtle.pencolor()#设置画笔颜色
turtle.fillcolor()#设置填充颜色
turtle.begin_fill()#开始填充
turtle.end_fill()#结束填充
#第一步：设置颜色
#第二步：开始填充
#第三步：画图形
#第四步：结束填充
turtle.showturtle()#显示画笔
turtle.hideturtle()#隐藏画笔
turtle.clear()#清除所有图形




