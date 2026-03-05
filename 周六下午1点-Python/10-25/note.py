# ~ n=int(input())
# ~ mj_he=0
# ~ for i in range(n):
	# ~ bc=int(input())
	# ~ mj_he+=bc*bc
# ~ print(mj_he)

n=int(input())
ls=list(map(int,   input().split()))
mi=min(ls)
he=0
cnt_mi=  ls.count(mi)
for i in ls:
	if i!=mi:
		he+=i  
print('%.1f'%(he/(n-cnt_mi)))


