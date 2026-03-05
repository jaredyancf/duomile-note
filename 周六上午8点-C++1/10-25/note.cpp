#include<bits/stdc++.h>
using namespace std;
int main(){
	
	
//	int  a=100;
//	int* b= &a;
//	cout<<  *b;   //解引用
//	
//	int  arr[5]={1,2,3};
//	for (auto x:arr){
//		cout<<x<<endl;
//	}

	//指针数组
//	int a=10;
//	int* arr[5]={&a,  &a, &a, &a};
//	
//
//	for (auto x:arr){
//			cout<<x<<endl;
//	}
	//数组指针
	
//	int a=100;
//	int* ap=&a;
//	
//	int arr[5]={1,2,3,4};
//	int  (*arrp)[5]=&arr;
//	
//	for(int i=0;i<=4;i++)
//	   cout<<(*arrp)[i]<<endl;
//


//for (int i=0;i<=4;i++)
//	v.push_back(110);
//auto并不是一个具体的类型  ,
//它是一个类型推断的符号

//只要修改过vector, 那么就需要把迭代器重新指向
//这个vector的首元素

//v.pop_back();
 
//cout<<v.size();

//所有的C++容器都可以使用size函数获取元素个数
//包括string




//auto  it=v.begin(); 
//v.insert(it,110);
//cout<<v.size();// vector的大小
//cout<<v.capacity();// vector的容量

//v.insert(it,110);
//v.insert(it,110);
//v.insert(it,110);
//v.insert(it,110);
//cout<<v.capacity();
vector<int>  v{1,2,3,4};

auto  it=v.begin()+1; 
v.erase(v.begin());
for (;it!=v.end();it++)
	cout<<  *it<<endl;













	
	return 0;
}


// 将数组arr第一个元素移到末尾,其余数据一次往前平移一个位置
//输入格式:
//第一行为数组arr的元素个数
//第二行为n个小于1000的正整数
//输出格式:
//平移后的数组元素,每个数用一个空格隔开
//输入样例:
//10
//1 2 3 4 5 6 7 8 9 10
//输出样例:
//2 3 4 5 6 7 8 9 10 1





