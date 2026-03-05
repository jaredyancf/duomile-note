//³Ì¼¾ÀÊ
//Ç®Ì©Çë¼Ù

#include<bits/stdc++.h>
using namespace  std;
int main(){
	int   n;
	cin>>n;
	int   g=(n/1%10+5)%10,   s=(n/10%10+5)%10,  b=(n/100%10+5)%10,
	q=(n/1000%10+5)%10;
	
	
	cout<< g*1000+s*100+b*10+q;
	
	return 0;
}


//1420
