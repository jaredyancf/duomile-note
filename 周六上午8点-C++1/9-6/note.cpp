#include <bits/stdc++.h>
using namespace std;

using ll=long long;  // 给类型起别名
#define ll  long long  //同上


const int N=1e5+10;
int  arr[N];



//duomileCODE



int main() {
	//防止超时
	//syn  same
	//stdio   standard 标准   input  output
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

//
//
	// int n=13;    //
	// string bin="";
//
	// for (;   n  ;){
	// char yu=   char(n%2+48) ; //5
	// bin=yu+bin;
	// n=n/2;   // 12
	// }
//
	// // cout<<bin;
//
	// int  cnt_0  =0,cnt_1=0;
//
	// for (int i=0;i<=bin.size()-1;i++){
	// if (bin[i]=='0')  cnt_0++;
	// else cnt_1++;
//
//
	// }
//





	// int yu=   char(n%8+48)  //4
	// oct=yu+oct;
	// n=n/8; //1
//
//
	// int yu=   char(n%8+48)  //1
	// oct=yu+oct;
	// n=n/8; // 0

	//  sizeof 返回变量的大小(单位是字节)
//	long long  arr[] {1,44,5,6,8888,5};
//	//cout<<sizeof(arr);
//	for (int i=0;  i<= sizeof(arr)/sizeof(long long)-1; i++)
//		cout<<arr[i]<<' ';

	// int   a=1;  //4个字节
	// long long b=7;  //8个字节



	int  n,r;
	cin>>n>>r;
	string x="";
	
	if (n==0) {
			cout<<0;
			return  0;
	}
	
	
	for (;   n  ;){
		
		int  yu=   n%  r;
		if (yu<=9)  x=   char(yu+48)+x;
		//   x+=  char(yu+48);     x=  x+  char(yu+48);
		else  x=  char(yu+55)+x;
		n/=r;
		
		
	}
	
	cout<<x;






	return 0;
}




//oj.czos.cn
//1288 1289 1290 1291 1292
//2066




//2^2=4
//2^3=8
//2^4=16
//2^5=32
//2^6=64
//2^7=128
//2^8=256
//2^9=512
//2^10=1024


//  192.168.31.144:8080/


