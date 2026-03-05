#91xjr
#字典

# ~ d={4: 'hello',  1:'hello2'}
# ~ print(d[4])

# ~ d={(1,2):  111}
# ~ print(d)

#Python中任何类型的数据都可以使用类型名字去创建
# ~ a=int('5')
# ~ ls=list('1234')
# ~ ls2=list((1,))
# ~ d=dict([[1,1],[2,2]])
# ~ print(d)

# ~ l1=[1,2,3]
# ~ l2=['hello', 'nihao','konichiwa']
# ~ s=zip(l1,l2)
# ~ print(dict(s))


# ~ d={1:'hello',3:'world'}
# ~ #print(d[11])  #如果没有对应的键直接报错
# ~ print(d.get(11))#如果没有对应的键返回None

n=int(input())
while 1:
	if n%2==1 and n!=1:
		print(n,end='->')
		n=3*n+1
		
	elif n%2==0:
		print(n,end='->')
		n=n//2
		
	else:
		print(1)
		break
