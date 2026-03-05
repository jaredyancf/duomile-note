# ~ ls=[1,2,3,4]
# ~ for  i in ls:
	# ~ print(i)
#字典的遍历

#d={1:'hello',  3:'world'}
# ~ for   k   in  d.keys():  
	# ~ print(k)
# ~ for   v   in  d.values():
	# ~ print(v)


# ~ for   k,v in   d.items():
	# ~ print(k,v)	
	
#查找

# ~ d={1:'hello',  3:'world'}
# ~ if   (1,'hello')   in  d.items():
	# ~ print('ok')


# ~ d={1:'hello',4:'world'}
# ~ d[4]='anhui'
# ~ print(d)

#课堂练习

# ~ ls=list(map(int, input().split(',')))
# ~ d={}
# ~ for  i in ls:
	# ~ if i  in d:
		# ~ d[i]+=1
	# ~ else:
		# ~ d[i]=1
# ~ for  k,v  in  d.items():
	# ~ if v==1:
		# ~ print(k)
		
s=input()  #        hellohomework
d={}
ls=[]

for  i in s:
	if i  in d:
		d[i]+=1
	else:
		d[i]=1
for   k,v  in  d.items():
	if v==1:
		ls.append(k)
		
		
for   i in s:
	if i in ls:
		print(s.index(i))
		break
else:
	print(-1)
		








