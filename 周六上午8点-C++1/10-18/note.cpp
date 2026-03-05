#include <bits/stdc++.h>

using namespace std;


//void  swap(int a, int b){
//	int tmp=a;
//	a=b;
//	b=tmp;
//}
//
//
//void  swap2(int* a,int* b){
//	int tmp=*a;
//	*a=*b;
//	*b=tmp;
//	
//}


//void  swap3(int* a,int* b){
//	int* tmp=a;
//	a=b;
//	b=tmp;
//	
//}

//
//int an(int n){
//	if (n==1) return 1;
//	
//	return an(n-1)+n-1;
//}
//


int  a[1000];

int main(){
	
	
	// 声明变量

	
	// 内存
	// 1字节(byte)  == 8 bit(比特位)
	
	//指针变量
	//是专门用来存储其他变量地址的变量
	
		
//	int   a=2;
//	int*   p=&a;  // &取地址符
//	a=20;
//	//这里的*跟上面声明指针变量时的*含义不一样
//	cout<<  *p;  //这里是解指针


//	int   a=100;
//	int*  p1=&a,  * p2=&a;  
//	a=99;
//	cout<<   *p1<<endl;
//	cout<<   *p2<<endl;




	//int a1=10,b1=20;
//	int tmp=a;
//	a=b;
//	b=tmp;
//	swap2(&a1,&b1);
//	cout<<a1<<" "<<b1;





//	int n,he=0;
//	cin>>n;
//	for (int i=1;i<=n;i++){
//		he+=an(i);
//	}
//	cout<<he;
//
//
//
//	int n,he_ji=0,he_ou=0;
//	cin>>n;
//	for (int i=1;i<=n;i++){
//	//	cin>>a[i];
//	
//		if (i%2==1) {
//			int t1;
//			cin>>t1;
//			he_ji+=t1;
//		}else{
//			int t2;
//			cin>>t2;
//			he_ou+=t2;
//		}
//			
//	}
//
//	cout<<"KING "<<he_ji<<endl<<"WIN "<<he_ou<<endl;
//	if (he_ji>=he_ou)
//		cout<<"KING";
//	else  
//		cout<<"WIN";
//
//
//	


int n,he=0;
cin>>n;

for (int i=1;i<=n;i++){
	int t;
	cin>>t;
	he+= t*t;
}

cout<<he;
	return 0;
}










//1145  1146  1147 1148
//oj.czos.cn

