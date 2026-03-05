#include <bits/stdc++.h>
using namespace std;
int main(){

	// int   n;
	// cin>>n;
	// int  yi=n+8,  bing =  yi-2;
	// cout<<n<<endl<<yi<<endl<<bing<<endl;
	// //求平均
	// cout<<fixed<<setprecision(1)<<(n+yi+bing)/3.0;

	// int    x;
	// cin>>x;
	// int   g=x/1%10,  b=x/100%10;
	// cout<<g+b;



	// int   x;
	// cin>>x;
	// int  q2=x/100, 
	// h2=x%100;
	// cout<<h2*100+q2;

	int    n;
	cin>>n;
	int g=n%10,s=n/10%10,  b=n/100%10, q=n/1000%10;
	int d2=g+s+b+q;
	cout<<n+d2;

	return  0;
}


//   1612    1613  1614 1615   1616   1617  1618  1619   
