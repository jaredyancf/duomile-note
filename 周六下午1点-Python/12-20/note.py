

# ~ n=int(input())
# ~ ls=list(map(float,input().split()))
# ~ ls.sort()
# ~ if n%2==1:
	# ~ print('%.1f'%ls[n//2])
# ~ else:
	# ~ print('%.1f'%((ls[n//2]+ls[n//2-1])/2))
	
#1221
n=input()
ls=list(map(float,input().split()))
ls.sort(reverse=True)
s=0
for i in  ls[:5]:
	s+=i
print('%.1f'%(s/5))

#1233   1221  1175  1172
#下节课讲1172
