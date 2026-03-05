//È«ÇÚ

//   oj.czos.cn
//1028 1390  1020

#include <bits/stdc++.h>
using namespace std;
int main(){
	//1028
	
//	int  n;
//	cin>>n;
//	int g=n/1%10,  s=n/10%10,b=n/100%10;
//	
//	int newn=g*100+s*10+b;
//	cout<<newn;
	
	//1607
	int  n;
	cin>>n;
	int g=n/1%10,  s=n/10%10;
	
	cout<<fixed<<setprecision(1)<<1.0*s/g;
	
	return 0;
}
