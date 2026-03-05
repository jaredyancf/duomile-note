//全勤
//本节课及之前的课洪诗彬除请假外都正常出勤


//  oj.czos.cn
//1029  1418  1608  1609  1610  1611
#include <bits/stdc++.h>
using namespace  std;
int main(){
	
	//1029
//	int   n;
//	cin>>n;
//	int g=n/1%10,s=n/10%10,b=n/100%10,q=n/1000%10;
//	int   n2=g*1000+s*100+b*10+q;
//	cout<<n2;
	
	
	
	
	//1608
	
	int    n ;
	cin>>n;
	
	int  g=n/1%10,s=n/10%10,b=n/100%10;
	float   bi=1.0*(b+s)/(s+g);
	cout<<fixed<<setprecision(2)<<bi;
	
	
	
	
	
	return 0;
}
