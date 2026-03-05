#    91xjr
#李瑾元  陈天爽 苏权 盛嘉豪  孟泽宇 王涵宇 夏睿宸
#罗晓请假  下周二已经补课

#之前学过的数据类型有哪些?
# int   float   str  bool



#数据类型转换
#  123     ->  123.0

# ~ a=  123
# ~ a=float(a)   # 把变量a转换成float类型
# ~ print(a)

# ~ b=123.9   #这里不是四舍五入,而是直接把小数去掉
# ~ b=int(b)  #把变量b转换成int类型
# ~ print(b)


#bool值强制转换为整数
# ~ c = False
# ~ c=int(c) #False转为0
# ~ c=True
# ~ c=int(c) #True转为1
# ~ print(c)


#任何类型都可以转换成str类型

# ~ a=   True
# ~ b=   str(a)
# ~ print(a == b)  #因为a是bool类型, b是str类型
#a和b的类型不一样,所以不相等

# ~ a=   123.4
# ~ a=str(a)
# ~ print(type(a))#查看a的数据类型




#str类型
#字符串连接
a='Hello '
b='Chen Tianshuang'
#b='Keyang  Mingxi'  #复姓  双姓 的区别 
c=a+b
print(c)

#n1=7
# ~ n1='787'  #'hello'
# ~ #n2=33
# ~ n2='33'  #'anqing'
# ~ n3=n1+n2
# ~ print(n3)





#字符串与整数相乘
# ~ a='hello'
# ~ a=a*3   
# ~ print(a)  #'hellohellohello'

#字符串中的换行符:   \n
# a='hello  \nworld'
#a=r'hello  \nworld'  #raw 原始的,未经处理的
#print(a)
