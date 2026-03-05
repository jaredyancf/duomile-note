#include <bits/stdc++.h>
using namespace  std;
int main(){
	
	//数据类型
	//之前学过的数据类型
	//整数类型 :  int   浮点数类型 : float
	
	//整数类型和浮点数类型还可以细分:
	//整数类型又分为:
	//int   ,   long  long
	//int和long  long 的唯一区别就是
	//存储空间的大小不一样
	//int是32位的,long  long是64位的
	
	//浮点数类型又分为:
	//float   ,   double
	//float和 double 的唯一区别就是
	//存储空间的大小不一样
	//float是32位的,double是64位的
		
		
		
	
	//布尔类型
	//表示对/错的类型
	//true/1   :对
	//false/0  :错
	
	
	
	//sizeof函数返回变量/值的内存大小
	//(单位是字节)
	// 8二进制位  =  1字节
//	int    a=1;
//	long  long  b=10;
//	double c=10.0;
//	bool  d=1;
//	cout<<sizeof(d);
//	
	
	//先声明变量
	int   a,b,c;
	//输入变量的值
	cin>>a>>b>>c;
	//长方体表面积= 2*(a*b+b*c+a*c)
	cout<<2*(a*b+b*c+a*c);
	
	
	
	

	return 0;
}







//输入三个数a b c,分别表示长方体的长宽高,
//计算这个长方体的表面积


