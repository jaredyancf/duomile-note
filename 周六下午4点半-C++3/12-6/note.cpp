// 施博华  焦陈昊  何小睿  刘梓钺(周二补的课)



#include<bits/stdc++.h>
using namespace  std;
int main(){
	
	int  n;
	cin>>n;
	
	int g=n/1%10, s=n/10%10,  b=n/100%10;
	int  new_n=g*100+s*10+b;
	cout<<new_n;
	





//1607  
//  %  取余 , 一般叫做取模
// 10%3  :  读作   10模3

//int  n;
//cin>>n;
//int g=n/1%10,s=n/10%10;
//
//cout<<fixed<<setprecision(1)<<  1.0*s/g;
//




//1020

//int n;
//cin>>n;
//int g=n/1%10,  s=n/10%10,b=n/100%10;
//int  newn= g*100+s*10+b;
//cout<<n+newn;


//int   n;
//cin>>n;
//
//int  g=n/1%10,    s=n/10%10,
//b=n/100%10,q=n/1000%10;
//int  newn=g*1000+s*100+b*10+q;
//cout<<newn;
//



	return 0;
}





//继续做整数拆位

//个位:    1234/1   %10
//十位:    1234/10  %10
//百位:    1234/100 %10
//千位:    1234/1000%10

// oj.czos.cn  
//1028   1390   1607   1020   1029   1418
 

