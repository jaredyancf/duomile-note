//È«ÇÚ



#include <bits/stdc++.h>
using  namespace  std;
int main(){
	//1393
//	int n,he=0;
//	cin>>n;
//	for (int i=1;i<=n;i++){
//		int g=i%10,s=i/10%10,b=i/100%10;
//		if (i%7==0 || (g==7 || s==7 || b==7));
//		else 	he+=i;
//	
//	}
//	cout<<he;
//	

		
	//1078
	
	
//	int   x;
//	cin>>x;
//	
//	int n=1;
//	double  s=0;
//	while (1){
//		s+=1.0/n;
//		if (s>x) break ;
//		n++;
//	}
//	cout<<n;
	
	
	
	
	
	//1460
	
//	double   x,he=0,  juli=2;
//	cin>>x;
//	
//	int cnt=1;
//	
//	while (1){
//		
//		he+=juli;
//		if (he>=x) break;
//		cnt++;
//		juli*=0.98;
//		
//		
//	}
//	
//	cout<<cnt;
//	
	
	
	//1241
//	int   n,cnt=0;
//	cin>>n;
//	
//	while (1){
//		if (n%2==0 ) {
//			n/=2;
//			cnt++;	
//		} 
//		else if (n%2==1 && n!=1) {
//			n=n*3+1;
//			cnt++;
//		}else {
//			cnt++;
//			break;
//		}
//	}
//
//	cout<<cnt-1;
	
	
	
	// 1389
	
	int   n,cnt=0,he=0;
	cin>>n;
	
	while (n!=0){
		if (n%10%2==0) he +=  n%10;
		n/=10;   //   n=n/10
		++cnt;
	}
	

	cout<<cnt<<" "<<he;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}




//  1393   1078   1460  1241   1389






