#2024-12 python二级
#11   13    17 21  30   31   34   
#2024-9 python二级
#1 3 4 6 8 9 11 12    17     21        29 30   32   




#break语句可以跳出break语句所在的这层循环

# ~ for   i in range(0,6):
	# ~ if i== 4: break
	
	# ~ for j in range(6,11):
		# ~ if j==7: break
		# ~ print(i,j)
		
		
#36

# ~ xiaoshoue=0.0
# ~ while 1:
	# ~ w=int(input())
	# ~ if w==0: break
	# ~ if w>=50:
		# ~ xiaoshoue+=w/500*1.5
	# ~ elif w>=30 and w<50:
		# ~ xiaoshoue+=w/500*1.2
	# ~ elif w>=20 and w<30:
		# ~ xiaoshoue+=w/500*1.0
	# ~ else:
		# ~ xiaoshoue+=w/500*0.7
# ~ print('%.2f'%xiaoshoue)




#37


word=input()
d={}   #  'test'
for i in word:
	if i not  in d.keys():
		d[i]=1
	else:
		d[i]+=1

flag=0
for  i in d.values():
	  #test
	if i>1:
		flag+=1
if  flag==0:
	print('yes')
else:
	print('no')
	
		
	
