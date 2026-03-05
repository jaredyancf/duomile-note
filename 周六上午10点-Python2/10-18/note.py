#陈天爽 苏权 罗晓  李瑾元 盛嘉豪 王涵宇 王皓阳

#  192.168.31.144:8000

#coding=gbk

import  turtle as   t
t.bgpic('迷宫01.png')
t.pencolor('red')
t.pensize(5)
 #  画笔速度 1~10越来越快,0最快
t.speed(0) 

t.up()
t.goto(-70,180)
t.down()

t.seth(-30)
t.fd(70)

t.seth(270)
t.fd(60)

t.seth(30)
t.fd(130)

t.seth(270)
t.fd(70)

t.seth(-30)
t.fd(70)

t.seth(210)
t.fd(70)

t.seth(270)
t.fd(70)


t.seth(-30)
t.fd(70)

t.done()

