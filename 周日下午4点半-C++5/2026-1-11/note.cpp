//   舒江阅  王清瑜 储语新






// for   i  in  range(1,n+1):
// 	for j in  range(1,i+1):
// 		print('%d*%d=%d'%(i,j,i*j),end=' ')
// 	print()

#include  <bits/stdc++.h>

using namespace  std;




//int   jc(int n){
//	
//	int res=1;
//	for (int i=1; i<=n; i++){
//		res*=i;   //  
//	}
//	
//	return res;
//}
//

void     yz(int x){
	for (int i=1;i<=x;i++){
		if (x%i==0)
			cout<<i<<" ";
	}
}







int main(){
	
	
//	int n;
//	cin>>n;
//	
//	for (int i=1;i<=n;i++){
//		for (int j=1;j<=i;j++){
//			printf("%d*%d=%d ", i,j,i*j);
//		}
//		cout<<endl;
//	}
//	
//	int   n,he=0;
//	cin>>n;
//	for (int  i=1;i<=n;i++){
//		
//		
//		
//		he+=  jc(i);
//	}
//	cout<<he;
	
	
	int   n;    //10 
	cin>>n;
	for (int i=1;  i<=n;i++){
		cout<<i<<":";
		yz(i);
		cout<<endl;
		
	}
	
	
	return 0;
}









//   oj.czos.cn
//1246     1019    1495  1518   1519  1445








