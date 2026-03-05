# ~ ls=input().split()  #  'end of file'   -> [  'end' ,  'of',   'file']
# ~ res=''
# ~ for    i in  ls:
	# ~ res+=i[0].upper()
# ~ print(res)


# ~ s='hello  world'
# ~ print(s.count(' '))

# ~ ls=list(input().split())
# ~ print(len(ls))



#列表的声明
# ~ l=   ['小黄',        '大黄',        '老黄',  12]

#获取列表中的值(元素)

# ~ for i in range(0,4):    #通过下标遍历列表
	# ~ print(l[i])

# ~ for i in l:    #直接遍历列表
	# ~ print(i)


s='hello world'
ls=['h','e','l','l','o',' ','w','o','r','l','d']
# ~ print(s[1:5])  #
# ~ print(ls[1:5])
# ~ print(ls[-1:-6:-1])


# ~ ls=[1, 3 ,2 ,4 ,1 ,5 ,3 ,9 ,7 ,10 ,8 ,23, 85, 43]

# ~ for  i in range(1,len(ls)-1):
	# ~ if  int(ls[i])>int(ls[i-1])   and ls[i]>ls[i+1]:
		# ~ print(ls[i])

# ~ N=int(input())
# ~ mj=0

# ~ for  i in range(N):
	# ~ bc=int(input())
	# ~ mj+=bc*bc
# ~ print(mj)



n=int(input())
ls=input().split()
for i in ls:
	i=int(i)
	if i**2%7!=1:
		print(i,end= ' ')
		

#  1423   1153


