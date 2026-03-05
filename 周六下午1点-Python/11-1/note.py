#元组合并及删除

# ~ tpl=1,2,3,7,5,4,6
# ~ for  i in  range(len(tpl)):
#	print(i)
# ~ ls=list(map(int,input().split()))
# ~ #2 5 7
# ~ #2  5 7
# ~ ls2=[]
# ~ for i in ls:
	# ~ for j in ls:
		# ~ if i!=j:
			# ~ ls2.append((i,j))
# ~ print(ls2)


# ~ n=input()
# ~ ls=list(map(int,input().split()))
# ~ flag=0
# ~ for i in ls:
	# ~ if ls.count(i)>  len(ls)//2:
		# ~ flag=i
# ~ print(flag)








# ~ n=int(input())
# ~ ls=list(map(int,input().split()))
# ~ for i in range(max(ls)+1):  #0 1 2 3
	# ~ print(ls.count(i))

# ~ ls=list(map(int,input().split()))
# ~ x=int(input())

# ~ n=ls[0]
# ~ ls_q=ls[1:]
# ~ if x in ls_q:
	# ~ index=ls_q.index(x)
	# ~ del ls_q[index]
# ~ for i in ls_q:
	# ~ print(i,end=' ')
#17 38 32 37 0 15 15 28 23 31 3 35 30 9 7 5 36 31 
#18










n=input()
ls=list(map(int,input().split()))
gou1=[]
gou2=[]
gou1.append(max(ls))
del ls[ls.index(max(ls))]
ls.sort(reverse=True)
while ls:
	gou1.append(ls[0])
	gou1.append(ls[1])
	del ls[0]
	del ls[1]
	gou2.append(ls[0])
	gou2.append(ls[1])
	del ls[0]
	del ls[1]



#主要做了几道acgo.cn的数组题

