//  什么是递归?
//递归就是函数自己调用自己



#include <bits/stdc++.h>
using namespace std;

//int foo(){
//	
//	return  foo();
//}

// 每次调用函数的时候系统都会分配一块内存空间给函数执行,  这个空间称之为函数
//的调用栈
long  long   jc(long  long   n){
	if (n==1)  return 1;
	
	return  n*jc(n-1);
}







//int  fib(int n){
//	
//	if (n==1  )  return  0;
//	if (n==2)  return 1;
//	return fib(n-1)+fib(n-2);
//}


int   gcd(int a,int  b){
	

		if (b==0) return a;
		return gcd(b,a%b);

}





int main(){
	long  long   m,n ;
	cin>>m>>n;
	cout<<"gcd=";
	cout<<gcd(m,n);
	
	
	return 0;
}



//   5248 5251  5252

///  gcd(a,b)  =  gcd(b,  a%b)
//  if (b==0)  return a;



