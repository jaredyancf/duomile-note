//舒江阅   王清瑜  储语新




#include<bits/stdc++.h>
using namespace  std;
int main(){
//	int   n;
//	cin>>n;
//	for (int i=1;   i<=n;   i++ ){
//		//  画空格
//		for (int k=n-i;  k>0;  k--){
//			cout<<" ";
//		}
//		
//		
//		//画星号
//		for  (int x=1;  x<=2*i-1;x++){
//			cout<<"*";
//		}
//		
//		cout<<endl;
//		
//		
//	}
	
	
//	int   n;
//	cin>>n;
//	for (  int  i=0;  i<n;i++   ){
//		//空格
//		for (int k=0;k<i;k++){
//			cout<<" ";
//		}
//		//星号
//		for (int x= 2*n-2*i-1; x>0;  x--){
//			cout<<"*";
//		}
//		
//		cout<<endl;
//		
//		
//	}
	
	
	
//	
//	int    n;
//	cin>>n;
//	
//	
//	for (int i=1;i<=n;i++){
//		
//		for (int j=1;j<=n; j++){
//			cout<<i;
//		}
//		
//		cout<<endl;
//		
//		
//		
//	}
	
//	int    n;
//	cin>>n;
//	for (int i=1;i<=n;i++){
//		
//		for (int k=1;  k<i;  k++){
//			cout<<" ";
//		}
//		
//		for (int x=1; x<=n;  x++){
//			cout<<"*";
//		}
//		
//		cout<<endl;
//		
//	}
//	
	
	int i,j,n;
		cin>>n;
		//控制输出n行
		for(i = 1; i <= n; i++) {
			//第1行和第n行有n个星
			if(i == 1 || i == n) {
				for(j = 1; j <= n; j++) {
					cout<<"*";
				}
			} else {
				//其他行，第i行有n-i个空格，1个星
				for(j = 1; j <= n - i; j++) {
					cout<<" ";
				}
				cout<<"*";
			}
	
			cout<<endl;
		}

	
	return   0;
}





//1783~1788    1065~1073  



