//   1241  1108   1053



#include <bits/stdc++.h>
using namespace std;
//
//int   jiaogu(int n){   //jiaogu(2)
//
//	if (n==1)
//			return 0;
//	else if (n%2==0){
//			
//			return 1+jiaogu(n/2);
//	}
//	
//	else if (n%2==1){
//		
//		return 1+jiaogu(n*3+1);
//	}
//		
//
//}


string   to_bin(int n){
	string s="";

	s=char(n%2+48)+s;
	return  to_bin(n/2); 
	
		
}  


int main(){
//	int  n;
//	cin>>n;
//	
//	cout<<jiaogu(n);
	

	return 0;
}




//ื๗าต:  1108
