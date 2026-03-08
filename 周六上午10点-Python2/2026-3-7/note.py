#  出勤:  李瑾元 孟泽宇  陈天爽



#oj.czos.cn
#1703  1602  1601   1329 1005  1337  
#1345  1565  1317  1338


 
#1329
# ~ a,b,h=input().split()
# ~ a=int(a)
# ~ b=int(b)
# ~ h=int(h)
# ~ mj=(a+b)*h/2
# ~ print("%.1f"%mj)

#1565
# ~ a,b,c=input().split()
# ~ a=int(a)
# ~ b=int(b)
# ~ c=int(c)
# ~ cj=a*0.2+b*0.3+c*0.5
# ~ print(int(cj))



#1317

# ~ n=int(input())
# ~ njh=(n-2)*180
# ~ nj=njh/n
# ~ print('%.1f'%nj)


#1338

#圆的面积:  pi*r*r
r1,r2=input().split()#  "11 22"  ->  '11' , '22'
r1=int(r1)  #'11'  -> 11
r2=int(r2)  #'22'  -> 22
pi=3.14
mj=pi*r1*r1-pi*r2*r2#  赋值语句
print('%.2f'%mj)



