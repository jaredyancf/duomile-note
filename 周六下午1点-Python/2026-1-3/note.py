# ~ n=int(input())

# ~ for i in  range(n):
	# ~ for j in range(i):
		# ~ print(' ',end='')
	# ~ for k in range(n-i):  #   0 1 2
		# ~ print(k+1,end='')
	# ~ print()
	
	
# ~ n=int(input())

# ~ for   i    in  range(n):  #0   1 2       
	# ~ for j in range(i):
			# ~ print(' ',end='')
	# ~ for  k  in  range(2*n-2*i-1) : # 5 3 1
		# ~ print(n-i,end='')
	# ~ print()
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

n=int(input())  #5
if n==1:
	print('*')

else:
	for   i in  range(n):
		print('*',end='')
	print()

	for i in range(n-2):   #  0 1 2
		for kg  in range(n-i-2):  #  3  2  1
			print(' ',end='')
		print('*',end='')
		
		print()

	for   i in  range(n):
		print('*',end='')
