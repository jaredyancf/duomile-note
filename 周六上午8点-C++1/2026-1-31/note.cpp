#include <bits/stdc++.h>
using namespace   std;
//using ll=long long;

typedef   long long ll;

// int   gcd(ll a,ll  b){
	

// 		if (b==0) return a;
// 		return gcd(b,a%b);

// }

//  1+2+3+4+...+100
	int   a(int n){

		if (n==1)  return 1;
		return n+a(n-1);
	}

   int   my_sum(int n,  int he){
   		if (n==1) return he+1; 
   		he+=n; 
   		return my_sum(n-1,  he);


   }



double   sum2(int n){
	if (n==1)  return  1;
	return  1.0/n+sum2(n-1);
}

double sum3(int n,  double   he){
	if (n==1) return he+1;
	he+= 1.0/n;
	return sum3(n-1, he);
}




int main(){
	// ll  m,n;
	// cin>>m>>n;
	// cout<<gcd(m,n);
	cout<<sum2(100)<<endl<<sum3(100,0);

	return 0;
}


//oj.czos.cn

//  使用递归计算1+2+3+...+100的和



//float    double
//作业 :  1078