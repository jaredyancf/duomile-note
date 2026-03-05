//程季朗
//另外两人请假
//  oj.czos.cn
// 1609  1610  1611

#include<bits/stdc++.h>
using namespace  std;
int main(){
	
	int    n;
	
	cin>>n;
	int  g=n/1%10,s=n/10%10,b=n/100%10, q=n/1000%10;
	int  n1=q*10+b,  n2=s*10+g;
	cout<<n1+n2<<endl;
	cout<<fixed <<setprecision(1)<<1.0*n1/n2;
	
	
	return   0;
}
