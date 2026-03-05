//循环嵌套

#include<bits/stdc++.h>
using namespace  std;

int    is_zhishu(long  long  n){
	
	if (n==1) return 0;
	for (long  long i=2;i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	
	return 1;
	
}



int main(){
	long long    n;
	cin>>n;
	for (long  long i=n;   i>=1;  i--){
		if (is_zhishu(i)) {
			cout<<i;
			return 0;
		}
	}
	
	cout<<"No";
	
//	int  n,  x,cnt=0;
//	cin>>n>>x;
//	for (int i=1;i<=n;++i){
//		int  tmp=i;
//		while(tmp){
//			if (tmp%10==x) cnt++;
//			tmp/=10;
//		}
//		
//		
//	}
//	cout<<cnt;




	return 0;
}




//计算1到n之间的所有整数中,数字x共出现了多少次.
//例如,在1到11中,  数字1出现了4次(1 2 3 4 5 6 7 8 9 10 11)
//输入格式:
//两个整数 n  x,  之间用空格隔开
//输出格式:
//一个整数,表示x出现的次数

//输入样例:
//11 1
//输出样例:
//4




//输入一个正整数,找到1到n里的最大质数,如果没有则输出"No"

//输入样例:
//1
//输出样例:
//"No"








