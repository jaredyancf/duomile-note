#   oj.czos.cn   
#  1202  1816

# ~ for   i in  range(5):   #0 1 2 3 4 
	# ~ for j in range(3,8):  #3 4 5 6 7
		# ~ print(i, j)  


def  gen_fib(n):
	if n==1  or n==2:
		return 1
	else:
		return gen_fib(n-1)+gen_fib(n-2)


n=int(input())
fib=[]
r_fib=list(map(int,     input().split()))

for i in range(1,n+1):
	fib.append(gen_fib(i))

ll=zip(r_fib, fib)
cnt=0
for   k,v  in  ll:
	cnt+=1
	if  k!=v:
		break
print(cnt)
for   i  in  fib:
	print(i,end=' ')
			
		
