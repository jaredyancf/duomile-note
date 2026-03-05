# ~ import  random  as rd

# ~ print(rd.randint(20,100))
# ~ ls=[]

# ~ for i in range(50):
	# ~ ls.append(rd.randint(20,100))
	
# ~ ls.sort()
# ~ for i in ls:
	# ~ print(i,end=' ')
	
# ~ d={}

# ~ for i in ls:
	# ~ if i not in d:  #
		# ~ d[i]=1
	# ~ else:
		# ~ d[i]+=1
		
		
# ~ print()
# ~ ma=0
# ~ ma_k=0
# ~ for k,v  in d.items():
	# ~ if v>ma:
		# ~ ma=v
		# ~ ma_k=k

# ~ print(ma_k)






#4680
# ~ n=int(input())

# ~ d={}
# ~ ls=[]
# ~ for   i  in  range(n):
	# ~ word=input()
	# ~ word=word.lower()
	# ~ ls.append(word)
# ~ for  i in  ls:
	# ~ if i not in d:
		# ~ d[i]=1
	# ~ else:
		# ~ d[i]+=1

# ~ ma=max(d.values())   #d.values()的值是一个列表
# ~ for k,v  in  d.items():
	# ~ if v==ma:
		# ~ print(k)
		
		
		
#2661

import  re
n=int(input())
zd={}


for  i in   range(n):
	    ls=input().split()
	    zd[ls[0]]=ls[1]
	    
# ~ print(zd)
hua_a=re.split(r'[]',input() )  #[abc d   d   abc   abcd  ]
for i in hua_a:
	if i  not  in  zd:
		print('UNK.')
	print(zd[i]+'.',end='')
	









