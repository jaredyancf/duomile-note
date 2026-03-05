#  oj.czos.cn

#1967 ~1977


#1970
# ~ import math
# ~ def  sushu(n):  #
	# ~ for i in range(2, int(math.sqrt(n))+1 ):
		# ~ if n%i==0:
			# ~ return 0
	# ~ return 1
	
	
	
# ~ for i in range(65,90+1):
	# ~ if sushu(i):
		# ~ print(i,chr(i))

# ~ for i in range(97,122+1):  #i变量在下面的for循环中被重置了
	# ~ if sushu(i):
		# ~ print(i,chr(i))
		

		
		
# ~ n=int(input())	
# ~ zimu='A'
# ~ for i  in  range(n):
	# ~ for  i in range(n):
		# ~ print(zimu,end='')
	# ~ zimu=chr(ord(zimu)+1)
	# ~ print()	

n=int(input())
for i in range(n):		
	zm='A'
	for i in range(n):
		print(zm,end='')
		zm=chr(ord(zm)+1)	
	print()	
		
#作业:  1979
