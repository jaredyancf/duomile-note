#1233   1221  1175  1172   1804  1806


#1172

# ~ n,k=map(int,  input().split())
# ~ ls=[]
# ~ for i in  range(n):
	# ~ ls.append(int(input()))
# ~ ls.sort(reverse=True)
# ~ print(ls[k-1])



#1806
n=input()
ls=list(map(int,input().split()))
a1,a2,a3=ls[0],ls[1],ls[2]

if  a2-a1==a3-a2:
	cha=a2-a1
	flag=1
	for    i   in  range(3, len(ls)) :
		if ls[i]-ls[i-1] !=cha:
			print('no')
			flag=0
			break
	if flag==1:
		print('dengcha')
	
	
if a2/a1==a3/a2:
	bi=a2/a1
	flag=1
	for  i in range(3,len(ls)):
		if ls[i]/ls[i-1] !=bi:
			print('no')
			flag=0
			break
	if flag==1:
		print('dengbi')
	

if  a2-a1  !=a3-a2    and   a2/a1   !=a3/a2: 
	print('no')
	


	

