//ºÎĞ¡î£    Áõè÷îá
#include<bits/stdc++.h>
using namespace  std;
int main(){
	
//	int a,b,c,d,e;
//	cin>>a>>b>>c>>d>>e;
//	
//	int tmp=a;
//	e+=tmp/3,  b+=tmp/3, a=0,  a+=tmp/3;
//	tmp=b;
//	a+=tmp/3, c+=tmp/3,b=0,  b+=tmp/3;
//	tmp=c;
//	b+=tmp/3, d+=tmp/3,c=0, c+=tmp/3;
//	tmp=d;
//	c+=tmp/3, e+=tmp/3,d=0, d+=tmp/3;
//	tmp=e;
//	d+=tmp/3,  a+=tmp/3,e=0, e+=tmp/3;
//	
//	
//	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "
//	<<e;
//	
	
	int  h,m,s,k;
	cin>>h>>m>>s>>k;
	
	s= h*3600+m*60+s+k; 
	
	cout<< s/3600<<" "<< s%3600/60<< " "<<s%60;
	
	
	
	
	return 0;
}
