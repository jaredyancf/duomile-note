# ~ #  1738
# ~ n=int(input())

# ~ ls=list(map(int,input().split()))
# ~ he_ji=0
# ~ he_ou=0

# ~ for i in range(1,n+1):
	# ~ if i%2==0:
		# ~ he_ou+=ls[i-1]
	# ~ else:
		# ~ he_ji+=ls[i-1]
# ~ print('KING', he_ji)
# ~ print('WIN', he_ou)
# ~ if he_ji>=he_ou:
	# ~ print('KING')
# ~ else:
	# ~ print('WIN')
		
		
		
		
		
		
#元组
# ~ ls=[1,3,4,6,7,4]
# ~ ls[0]=110
# ~ tpl=(1,2,3,4) 
# ~ del tpl[0]
# ~ tpl[0]=110

#tpl=1,2,3,4  # 元组的小括号可以省略
# ~ print(tpl[0])		
# ~ print(ls)	
		
#tpl=tuple([1,2,3,4])
#字符串相当于字符的列表
# ~ tpl=tuple('apple')  #'apple' => ['a','p','p','l','e']
# ~ print(tpl[0])
		
		

#in   和  not   in
# ~ tpl=(1,2,3)
# ~ print(1 not  in  tpl)
# ~ if   11 in  tpl:
	# ~ print('在')


#index:  返回元组中某个元素的下标
# ~ tpl=(1,2,3)
# ~ print(tpl.index(2))
#count:  返回元素在元组中出现的次数

# ~ tpl=(1,2,2,3)
# ~ print(tpl.count(2))








n=int(input())
ls=list(map(int,input().split()))
m=min(ls)
del ls[ls.index(m)]
he=0
for i in ls:
	he+=i
print('%.1f'%(he/(n-1)))









#下节课讲元组合并及删除



		
