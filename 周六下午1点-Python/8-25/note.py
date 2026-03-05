# ~ def  dcs(n):
	# ~ g=n%10
	# ~ s=n//10%10
	# ~ b=n//100%10
	# ~ q=n//1000
	# ~ if n<=999   and g-s==s-b:
		# ~ return 1
	# ~ elif n>=1000 and g-s==s-b  and s-b==b-q: 
		# ~ return 1
	# ~ else:
		# ~ return 0
		
# ~ n,m=list(map(int,input().split()))
# ~ for i in range(n,m+1):
	# ~ if dcs(i):
		# ~ print(i)
		
		
		
# ~ s=input()   #Goodboy
# ~ ma=0
# ~ ma_zm=''
# ~ for i in s:
	# ~ if ord(i)%2==0  and ord(i)>ma:
		# ~ ma_zm=i
		# ~ ma=ord(i)
# ~ if ma_zm=='':
	# ~ print('No')
# ~ else:
	# ~ print(ma_zm)
		
	

# ~ s='hellohelloh'
# ~ print(s.count('h',5,10+1))
s=input()
he=0
for i in s:
	he+=  int(i)
print(he)

		
		
