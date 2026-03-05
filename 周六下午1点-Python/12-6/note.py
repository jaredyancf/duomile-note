#1764

# ~ n=int(input())
# ~ ls=[]
# ~ for  i in range(n):
	# ~ x=int(input())
	# ~ ls.append(x)

# ~ d={}
# ~ ls.sort()
# ~ for i in  ls:
	# ~ if i not in d:
		# ~ d[i]=1
	# ~ else:
		# ~ d[i]+=1

		
		
# ~ for   k,v  in d.items():
	# ~ print(k,v)


#1762

# ~ n,q=map(int,input().split())
# ~ d={}

# ~ for i in  range(n):
	# ~ name, id=input().split()
	# ~ d[name]=id


# ~ for i in  range(q):
	# ~ name=input()
	# ~ print(d[name])
	
	
	
	
	
	
n=int(input())
d={}
ma=0
for i  in range(n):
	name,  h,id=input().split()
	h=int(h)
	
	d[name]= (h,id)
	if    h>ma:
		ma=h


		
d2={}
for   k,v   in d.items():
	if v[0]==ma:
		d2[k]=v
		

		
mi_id=100000000000
# ~ print(d2)

for k,v in d2.items():
	if int(v[1])<mi_id:
		mi_id=int(v[1])
	

for k,v   in  d2.items():
	if v[0]== ma  and   int(v[1])==mi_id:
		print(k,v[0],v[1])
	
	
	
	
	

#下节课讲
#程小果的身高问题
#https://noi.cgyounger.com/problem/A-level5010



