

# ~ n=input()

# ~ ls=input().split()   # 1 2 3 4 5 6 7  8  9 10
# ~ a1,b1=input().split()
# ~ a1=int(a1)  #  2
# ~ b1=int(b1)  #4
# ~ a2,b2=input().split()
# ~ a2=int(a2)  #7
# ~ b2=int(b2) #9
# ~ ls2=ls[:a1-1]+ ls[a2-1:b2]+ls[b1:a2-1]+ls[a1-1:b1]+ls[b2:]
# ~ for i in ls2:
	# ~ print(i,end=' ')
	
	
	
#向列表末尾添加元素
# ~ ls=[1,2,3,4,6]
# ~ ls.append(110)
# ~ print(ls)
	
#向列表的某一位置插入元素
# ~ ls=[1,2,3,4,6]
# ~ ls.insert(1,110)
# ~ print(ls)

#修改列表中的元素

# ~ ls=[1,2,3,4,6]
# ~ ls[1]=110
# ~ print(ls)	

#删除列表中的元素

# ~ ls=[1,2,3,4,6]
# ~ del  ls[4]
# ~ print(ls)


#连接两个列表
# ~ ls1=[1,2,3]
# ~ ls2=[4,5,6]
# ~ ls3=ls1+ls2
# ~ print(ls3)


# ~ ls=[1,2,3]
# ~ ls2=[4,5,6]
# ~ ls.extend(ls2)
# ~ print(ls)



#下节课讲remove  pop





# ~ n=int(input())
# ~ ls=[]
# ~ for i in range(n):
	# ~ ls.append(int(input()))   # 3 2 1
# ~ cnt=0


# ~ while len(ls)>0:
	# ~ for i in range(1,  len(ls)):
		# ~ if ls[i]<ls[0]:
			# ~ cnt+=1
	# ~ del ls[0]
# ~ print(cnt)



nan=input().split()
nan_z=0
for i in range(0,len(nan)-1):
	nan_z+=int(nan[i])
nan_pj=nan_z/(len(nan)-1)

nv=input().split()
nv_z=0
for i in range(0,len(nv)-1):
	nv_z+=int(nv[i])
nv_pj=nv_z/(len(nv)-1)
print('%.1f %.1f'%(nan_pj,nv_pj))


#1171    1215     1319


