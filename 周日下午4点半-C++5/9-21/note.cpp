#include <bits/stdc++.h>


using  namespace  std;
int main(){
//	
//	int he=0;
//	for (int i{100};  i>=1;i-=3){
//		
//		he+=i;
//		
//	}
//	
//	
//	cout<<he;



//	for (int i=10;i<=99; i++){
//		
//		int ge=i%10,  shi=i/10;
//		if (ge==2 || shi==2)
//			cout<<i<<"\n";
//		
//		
//	}





//for(int i=10;i<=99;i++){
//	//TODO
//	int  shi=i/10,ge=i%10;
//	if (shi>ge  && (shi+ge)%2==0)
//		cout<<i<<"\n";
//}
	





//int  n=123;
//cout<<n%10<<" "<<n/10%10<<" "<<n/100;



	for(int i=100;i<=999;i++){
		
		int ge=i%10, shi=i/10%10,bai=i/100;
		                           // 400
		if ((ge+shi+bai)%2==0  &&  bai>shi&& shi>ge){
			cout<<i<<"\n";
		}
		
		
		
		//TODO
	}











	return 0;
}
