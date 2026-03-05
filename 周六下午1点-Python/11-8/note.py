#acgo.cn


# ~ n=int(input())
# ~ def  is_xl(ls):
	# ~ for i in range(len(ls)-1):
		# ~ if ls[i]== ls[i+1]:
			# ~ return 0
	# ~ return 1



# ~ for  i in  range(n):
	# ~ t=int(input())
	# ~ ls=list(map(int,input().split()))
	# ~ ls2=sorted(ls)
	# ~ if  is_xl(ls2):
		# ~ print('YES')
	# ~ else:
		# ~ print('NO')
	#1 2 3 6 7 8 
	#1 2 2 3 4 5
	
	
	
	
# ~ AC 狗不喜欢能被 3 整除的数，也不喜欢以 3 结尾的数。它开始写
# ~ 它喜欢的数字：1,2,4,5,7,8,10,11,14,16......，这些数字组成了
# ~ 一个数列。现在告诉你 k，请你求出此数列的第 k 项。

# ~ 输入格式
# ~ 第一行包含一个整数 T, 测试用例的数量。
# ~ 每个测试用例由一行包含一个整数 k,表示需要求出这个数列的第 k项

# ~ 输出格式
# ~ 对于每个测试用例，在单独的一行中输出一个整数，表示数列的第 k 项。

# ~ T = int(input())
# ~ for _ in range(T):
        # ~ k = int(input())
        # ~ count = 0
        # ~ num = 1
        # ~ while True:
            # ~ if num % 3 != 0 and num % 10 != 3:
                # ~ count += 1
                # ~ if count == k:
                    # ~ print(num)
                    # ~ break
            # ~ num += 1








# ~ n=input()
# ~ ls=map(int,    input().split())
# ~ for i in ls:
	# ~ if i%2==0:
		# ~ print(i)



# ~ ls=list(map(int,     input().split()))

# ~ for  i in  ls[-2:  :-1]:
	# ~ print(i,  end= ' ')


#作业  acgo.cn   A29930



