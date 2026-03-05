#dir函数:  查看某个变量/类型的所有方法


# ~ d={1:2,  3:5, 5:9}
# ~ d=9  #
# ~ d=1.0
# ~ d=True
#print(d.__class__)   #查看变量的类型,同type方法
#print(d.__class_getitem__(dict))  #key-value是键值对
#item项目,元素

#print(d.__contains__(1))  #contain  包含

#print(d.__iter__())

#for   i in  d.__iter__():  #__iter__返回键的列表
#	print(i)


#print(d.__len__())   #同len函数
# ~ print(d.__sizeof__())
#print(dir(dict))





#clear方法

# ~ d={1:2}
# ~ #d.clear()  #    只清除字典中的元素,  但是不删除变量d 
# ~ del  d  #删除变量d 
# ~ print(d)



#get方法

# ~ d={1:2,5:6}
# ~ #print(d.get(4))  #如果键不存在则返回None
# ~ print(d[4])#如果键不存在则报错


#update方法

# ~ d={1:'小王',  2:'小韩'}
# ~ d.update({2:'老李'})
# ~ print(d)


#pop方法
# ~ d={1:'小王',  2:'小韩'}
# ~ s=d.pop(1)   #返回的只是值  '小王'
# ~ print(s)
#print(d)



#popitem方法

# ~ d={ 2:'小韩',   1:'小王'   ,  3:'老李'}
# ~ print(d.popitem())

#setdefault
# ~ d={ 2:'小韩',   1:'小王'   ,  3:'老李'}
# ~ r=d.setdefault(2,'老庄')
# ~ print(r)



#fromkeys(keys):以keys为键创建一个字典,
#keys可以是列表/元组/字符串
# ~ keys=[1,2,3,4]
# ~ keys='hello'
# ~ d=dict.fromkeys(keys,110)
# ~ print(d)





# ~ d={(1,2):333}
# ~ d={[1,2]:333}
# ~ print(d)

d=dict([])
d={()}   #这样只能产生一个集合
print(type(d))
