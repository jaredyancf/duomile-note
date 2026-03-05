//  全勤

// 为什么会有数据类型?
//数据类型的本质就是给数据分类
//为什么要给数据分类?
//主要原因是因为不同类型的数据的处理方式不一样,
//如果不给数据分类就会造成所有的数据都会使用同样的
//处理方式,这必然会造成程序的混乱


//  数值类   :  整数  浮点数  
//整数又分为:(基于内存的考虑)
// int  ,   long  long  
//int   a;  //4byte
//  k=1024byte
//  M=1024k
//  G=1024M
//  T=1024G


//浮点数也分为两类: (基于内存的考虑)
//float   ,   double(推荐使用)



//为什么要考虑内存?
 
// 字符串 : 

//bool :








#include <bits/stdc++.h>
using namespace std;
int main(){
	
//	string    s="hello",  s2="world";
	
	//cout<<s*s2;
	
	
	//类型转换
	
	//在任何数学表达式中,如果存在浮点数,那么该表达式
	//的返回值就是浮点数
	
	
	//数值类型之间可以相互转换
	//   int(a)  :把变量a转换成int类型
	//a可以是整数 浮点数或者是char类型
	// (long long)() :把变量a转换成long  long类型
	
	
	//float(a): 把变量a转换成float类型
	//double(a)  : 把变量a转换成double 类型
	
	//int     a=1110.999;
	//int   a=11;
	//string  a="1111";
	//int      b=a;//  这里没有四舍五入
	
//	using _ll=long long;   //  给long  long类型ll
//	cout<<  _ll(a);
	
	
	
	
	
	
	
	
	//printf   :  格式化输出函数
	
	double  a=1111111.20456789;
//	cout<<fixed<<setprecision(2)<<a;



	//%是占位符,表示后面要插入一个变量/值
	// f表示后面要插入的变量a是浮点数类型
	// %后面的点表示小数点
	//2表示保留两位小数
	printf("a的值是:%.2f",1.2222);
	
	return 0;
}



