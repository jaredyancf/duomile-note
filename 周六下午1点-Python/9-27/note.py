

#1809
# ~ n=input()
# ~ ls=list(map(int     ,    input().split()))
# ~ ma=max(ls)
# ~ mi=min(ls)
# ~ print(ma-mi)












# ~ #remove  和pop
# ~ #这两个都是删除列表中的元素
# ~ ls=[1,1,2,3,4,5]
# ~ ls.remove(1)   #按值删除元素
# ~ ls.remove(1)
# ~ ls.pop()  #默认删除列表最后的元素
# ~ ls.pop(1)  #按照下标删除元素
# ~ print(ls)


#sort排序


ls=[1,211,32,4,5]

#ls.sort()  #默认按照从小到大排序
ls.sort(reverse=True)  #从大到小排序,  reverse 反转
print(ls)

#1319   1809   1155   1158



