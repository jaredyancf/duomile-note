#   2002   1333


# ~ n=int(input())

# ~ s=input()
# ~ fen=0
# ~ k=0
# ~ for i in range(len(s)):
	# ~ if s[i]=='V':
		# ~ k+=1
		# ~ fen+=1
	# ~ if i==n-1  and s[i]!='V':
		# ~ if k==3:
			# ~ fen=fen+k-2
		# ~ k=0
		
	# ~ if i=='X':
		# ~ fen-=1
# ~ print(fen)


# ~ ls=[3,2,3,6,9]
# ~ for i in ls:
	# ~ f=i
	
	# ~ for j in   ls:
		# ~ if j!=f    and  j%f==0:
			# ~ ls.remove(f)
			
			
# ~ print(ls)
			

#迭代器

# ~ ls=[1,2,3,2,2,4,5]

# ~ for   i in ls:
	# ~ if i==2:
		# ~ ls.remove(i)
# ~ print(ls)
		





# ~ ls=[1,2,3,4,5]
# ~ print(len(ls))


#  +运算符


# ~ ls1=[1,2,3]
# ~ ls2=[4,5,6]
# ~ ls3=ls1+ls2
# ~ ls2.extend(ls1)
# ~ print(ls2*3)








#二维列表

# ~ ls=[[1,2,3],    [2,3,4],     [3,4,5] ,5 ]
# ~ print(ls[2][1])



# ~ for i in ls:
	# ~ if i!=5:
		# ~ for j in i:
			# ~ print(j,end=' ')
		# ~ print()






# ~ ls=[]
# ~ for i in range(101):
	# ~ ls.append(i)
# ~ ls2=ls[1::2]
# ~ print(ls2)	

# ~ ls=list(map(int,  input().split(',')))
# ~ ma=max(ls)
# ~ mi=min(ls)

# ~ ls.remove(ma)
# ~ ls.remove(mi)
# ~ print(mi,ls[0],ma)

def  is_wanmei(n):
	if len(str(n))%2==1:
		return 0
	for i in str(n):
		if int(i)%2==1:
			return 0
	return 1



n=input()
ls=list(map(int,input().split()))
for i in ls:
	if is_wanmei(i):
		print(i)




#下节课讲元组



