
#coding=gbk
#  孟泽宇 李瑾元 苏权 夏睿宸 王涵宇  陈天爽  盛嘉豪


#画圆
import turtle  as  t
t.pensize(5)
t.speed(0)
#t.circle(r,  c,  step)    : r是半径,r是正数往左边偏
#r是负数往右边偏
#c是弧度,  c也可以取负数

#step步数

#t.circle(100,  360,50)      #  bicycle

# ~ t.seth(-90)
# ~ t.circle(100)

# ~ t.seth(45)
# ~ t.circle(100)
# ~ t.circle(-100)
# ~ t.lt(90)
# ~ t.circle(100)
# ~ t.circle(-100)


t.circle(100)
t.up()
t.goto(300,0)
t.down()
t.circle(100)

t.up()
t.goto(0,-300)
t.down()
t.circle(100)

t.up()
t.goto(300,-300)
t.down()
t.circle(100)



t.done()



