
//  何小睿   施博华 焦陈昊

//整数拆位



//oj.czos.cn
// 1317
#include <bits/stdc++.h>
using namespace std;
int main(){
//	int    n;
//	cin>>n;
//	int  he=(n-2)*180;
//	cout<<fixed<<setprecision(1)<< 1.0* he/n;
	//如果表达式中有浮点数,
	//那么表达式的结果就是浮点数
	
	
	
	
	//对于任意整数n,
	// n/1%10 都会得到n个位上的数字
	// n/10%10 都会得到n十位上的数字
	// n/100%10 都会得到n百位上的数字
	// n/1000%10 都会得到n千位上的数字
	//...
	
	
	//1605
	
//	int     n;
//	cin>>n;
//	
//	int shi=n/10%10,     ge=n/1%10;
//	
//	cout<<shi+ge;
//	
	
	//1606
	
	
//	int    n;
//	cin>>n;
//	
//	
//	int   ge=n/1%10,   shi=n/10%10;
//	
//	cout<<ge*10+shi;
//	
	
	
	
	//1027
	
	int    n;
	cin>>n;
	int   g=n/1%10,s=n/10%10,   b=n/100%10;
	cout<<g+s+b;
	
	
	
	
	return 0;
	
	
}


//  1565  1345


//1605  1606   1027  
