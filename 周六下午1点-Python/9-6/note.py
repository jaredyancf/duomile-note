# ~ m=  int(input())
# ~ ks_h,  ks_m=input().split(':')
# ~ ks_h=int(ks_h)
# ~ ks_m=int(ks_m)
# ~ js_h,  js_m=input().split(':')
# ~ js_h=int(js_h)
# ~ js_m=int(js_m)

# ~ ms=(js_h-ks_h)*60+  js_m-ks_m

# ~ if m%ms==0:
	# ~ print(m//ms)
# ~ else:
	# ~ print(m//ms+1)
	
	
	
#字符串切片
#冒号左边表示开始(begin),右边表示结束(end)
#步长的正负表示切片的方向,正表示从左向右切,
#负表示从右向左切

# ~ s='hello world'
# ~ print(s[5::-2])  #range(begin,  end,step)




# ~ s='12345.'
# ~ if s[:len(s)-1]==s[len(s)-2: :-1]:
	# ~ print('TRUE')
# ~ else:
	# ~ print('FALSE')

# ~ a,b=input().split(',')
# ~ print(b,',',a,sep='')
	
s='2000*300='
s=s[    :    -1]
a,b=s.split('*')
a=int(a)
b=int(b)
print(a*b)
	
	
	
	
	
	
	
	

##1098         1402  1116   1129  1130

#作业:  1100



