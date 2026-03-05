# ~ n=  int(input())
# ~ ls=list(map(int,input().split()))
# ~ pjf=sum(ls)/n
# ~ print('%.1f'%pjf,end=' ')

# ~ n_gt=0
# ~ for i   in  ls:
	# ~ if i>=pjf:
		# ~ n_gt+=1
# ~ print(n_gt, n-n_gt)



n=  int(input())   #  6  
ls=list(map(int,input().split()))
n_ls=[]
for i in  range(n//2):
	n_ls.append(ls[i]*2)
	
	
for i in range(n//2,n):
	n_ls.append(ls[i]+1)


for  i in n_ls:
	print(i,end=' ' )
