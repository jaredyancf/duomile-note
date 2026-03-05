
# ~ s1=input()

# ~ for i in s1:
	# ~ if 65<=ord(i)<=90:
		# ~ if  ord(i)-5<=64:
			# ~ print(chr(ord(i)-5+26),end='')
		# ~ else:
			# ~ print(chr(ord(i)-5),end='')
	# ~ else:
		# ~ print(i,end='')
		
		
		
		
		
		
		
		
		
#len(s)  :返回字符串s的长度



#s.upper()   将字符串s中的所有字符转大写
#s.lower()  将字符串s中的所有字符转小写
# ~ s='hhhhh'

# ~ print(s.upper())





















# ~ s=' a b c'
# ~ new_s=''   #'abc'
# ~ for i in s:
	# ~ if i  !=  ' ':
		# ~ new_s+=i
# ~ n=s.count(' ')
# ~ for i in range(n):
	# ~ print(' ',end='')
# ~ print(new_s)
	

s=input()

for  i in s:
	if        65<=ord(i)<=90  :
		print(chr(90-(ord(i)-65)),end='')	
	elif   97<=ord(i)<=122:
		print(chr(122-(ord(i)-97)),end='')
	else:
		print(i,end='')





#1387   1475  1102   1133



#下节课讲字符串切片
#作业:1312






