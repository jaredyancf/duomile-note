//出勤:   戴梓超   王子杨  江悦  程季朗

//1717  1718   1736

//oj.czos.cn 

#include<bits/stdc++.h>
using namespace std;
int  main(){
	// int n=10;
	// cout<<fixed<<setprecision(1)<<1.0*5/2 * n*1.0;


	// int  a=1,b=2,c=3,d=4;

	// cout<<max({a,b,c,d});

	  // int  n;

	  // if (n%100 != 0   )
	int  n;
	cin>>n;
	if ((n%4==0  && n%100!=0)  ||n%400==0)
		cout<<"yes";
	else
		cout<<"no";

	return 0;
}


// 两个整数相除的结果还是整数