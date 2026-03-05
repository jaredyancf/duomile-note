//  ´¢ÓïĞÂ   ÍõÇåè¤
#include <bits/stdc++.h>
using namespace std;
int main(){
	
//	for (int shi=1;shi<10;shi++){
//		for (int ershi=4;ershi>=1; ershi--){
//			if (shi*10+ershi*20==100)
//				cout<<shi<<' '<<ershi<<endl;
//		}
//	}
//	

//int  n,  x,  y;
//cin>>n>>x>>y;
//
//
//
//for (int x_n=1;x_n<=n/x;x_n++){
//	for (int y_n=1;y_n<=n/y;y_n++){
//		if (x*x_n+y*y_n==n  && x_n%2==0  && y_n%2==0)
//			cout<<x_n<<' '<<y_n<<endl;
//	}
//}


//   int n,x,y,cnt=0;
//   cin>>n>>x>>y;
//   
//   for (int x_n=10;  x_n<= n/x;x_n++){
//   	for (int y_n=n/y;y_n>=10; y_n--){
//	   	if (x*x_n+y*y_n==n)
//	   		cnt++;
//	   }
//   	
//   }
//   
//   
//   cout<<cnt;
//   
//   


	
	for (int g=1; g<100/5; g++){
		for (int m=1; m<=100/3; m++){
			for (int x=1; x<100*3;x++){
				if (g*5+m*3+x/3.0==100  && g+m+x==100)
					cout<<g<<' '<<m<<' '<<x<<endl;
			}
		}
	}
	


	
	return 0;
}
