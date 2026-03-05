

#include<bits/stdc++.h>
using namespace  std;



int  is_huiwen2(int n){
	
	int new_n=0,tmp=n;
	
	
	while (tmp>0){
		new_n=new_n*10 +   tmp%10 ;
		tmp/=10;
	
		
		
	}
	
	if (new_n==n) return 1;
	else return 0;
	
}



int main(){
	
	
//	int X;
//	cin>>X;
//	while (1){	
//		X++;
//		if (is_huiwen2(X)){
//			cout<<X;
//			break;
//		}
//		
//	}

//cout<<is_huiwen2(12300);
//	
//int     n;
//cin>>n;
//
//for(;n>0;){
//	cout<<n%10<<" ";
//	n=n/10;
//}


	int    m, n, r;
	cin>>m>>n;
	r=m%n;
	
	
	while(r != 0 ){
		m=n;
		n=r;
		r=m%n;
	}
	
	cout<<n;



	
	return 0;
}








//给你一个整数,  要求从个位开始分离出它的每一位数字

//输入样例:
//123
//输出样例:
//3 2 1




//求两个正整数m n的最大公约数

//输入:
//4 6
//输出:
//2



