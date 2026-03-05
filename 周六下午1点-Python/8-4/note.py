#字符串进阶
# ~ s='こにちは'
# ~ s1='你好'
# ~ '''这是多行注释
# ~ 这是多行注释
# ~ '''

# ~ print(s)
# ~ name='小明'
# ~ age=12
# ~ h=1.68
# ~ #使用%创建字符串
# ~ s='我叫%s,今年%d岁,身高%.2f'% (name,age,h) 
# ~ print(s)

#其他的格式化输出语法
#%c:  单个字符
#%o:  八进制
#%x:  十六进制


#各种进制数字的一般表示
#0b11011  :  二进制   
#0o1234567  :  八进制
#0x1fab:  十六进制

# ~ s='%c'%"a"
# ~ s='%o'%0b111# 

#%f和%g的区别


# ~ s='%f'%1.68   #  1.680000
# ~ s='%g'%1.6800000000000    #%g会省略小数末尾的无效零
# ~ print(s)


#  format  函数
#这是个强大的格式化函数,format函数会生成一个格式化之后的字符串
# ~ name='小明'
# ~ age=12
# ~ h=1.68
# ~ s1='我叫%s,今年%d岁,身高%.2f'% (name,age,h) 

# ~ s2='我叫{},今年{}岁,身高{}'.format(name,age,h)
# ~ s3='我叫{:s},今年{:d}岁,身高{:f}'.format(name,age,h)
# ~ s4='我叫{2},今年{1}岁,身高{0}'.format(name,age,h)
# ~ s5='我叫{0:s},今年{1:d}岁,身高{2:.2f}'.format(name,age,h)


# ~ print(s5)



#字符串的索引
#索引又叫做下标
#字符串的索引从左向右是:  0 1 2 3 4 ...
#字符串的索引从右向左是:  -1 -2 -3 -4 -5 ...
#
s='我是小熊熊,来自浪浪山'   #
#遍历字符串
#1.按照索引来遍历
# ~ for   i   in  range(12):  #0 ... 11
	# ~ print(s[i], end=' ')
# ~ print()

#反向遍历字符串
# ~ for  i in  range(-1,-12,-1):  #  -1~-11
	# ~ print(s[i],end=' ')


#2.直接遍历字符串
# ~ for   i   in s:   # in后面可以接 字符串 列表 元组...
	# ~ print(i,end=' ')
	
	
#oj.czos.cn 


# ~ h1,f1,m1=input().split(':')
# ~ h2,f2,m2=input().split(':')
# ~ print(h1,f1,m1)
# ~ print(h2,f2,m2)
# ~ h1=int(h1)
# ~ f1=int(f1)
# ~ m1=int(m1)
# ~ h2=int(h2)
# ~ f2=int(f2)
# ~ m2=int(m2)
# ~ print(3600*(h1-h2)+60*(f1-f2)+(m1-m2))




#ASCII码:
#为键盘上的每一个字符编的号
# 数字:  48~57
#大写字母: 65~90
#小写字母: 97~122

#ord函数
#返回字符所对应的ascii码
# ~ ma=ord('0')
# ~ ma2=ord('A')
# ~ ma3=ord('z')
# ~ print(ma3)


#chr函数
#跟ord函数相反
#返回ascii码所对应的字符
# ~ c=chr(97)   #character   ->  char  -> chr
# ~ print(c)
# ~ ma=65
# ~ for  i in range(5):
	# ~ print(chr(ma))
	# ~ ma+=1





c=input()

if c=='Z':
	print('A')
elif c=='z':
	print('a')
else:
	print(chr(ord(c)+1))








#1101      1967




