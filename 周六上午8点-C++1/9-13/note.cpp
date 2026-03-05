#include<bits/stdc++.h>


using namespace std;
using ll=long long;
int   pfs(ll n){
	
		for (int i=1; i<=sqrt(n);i++){
			if (i*i==n) {
				return 1;
			}
				
		}
		
		return 0;
		
}


//bool pfs( ll n) {
//    if (n < 0) return false;
//    
//    ll root = sqrtl(n);
//    return root * root == n;
//}
//
//
//bool pfs(ll n) {
//    if (n < 0) return false;
//    
//    // 平方数的末位只能是0,1,4,5,6,9
//    ll last_digit = n % 10;
//    if (last_digit == 2 || last_digit == 3 || 
//        last_digit == 7 || last_digit == 8) {
//        return false;
//    }
//    
//    // 进一步验证
//    ll root = sqrt(n);
//    return root * root == n;
//}


//
//
//bool pfs(ll n) {
//    if (n < 0) return false;
//    if (n == 0 || n == 1) return true;
//    
//    ll left = 1, right = n;
//    while (left <= right) {
//        ll mid = left + (right - left) / 2;
//        ll square = mid * mid;
//        
//        if (square == n) {
//            return true;
//        } else if (square < n) {
//            left = mid + 1;
//        } else {
//            right = mid - 1;
//        }
//    }
//    return false;
//}
//




//int hws(string oct){
//	string oct2=oct;
//	reverse(oct.begin(),oct.end());
//	if (oct2==oct) return 1;
//	else  return 0;
//	
//}


int   hws(ll  n){
	
	
	string oct="";
	
	
	for (;n;){
		
		oct=char(n%8+48)+oct;
		n/=8;
	}
	  
	string   oct2=oct;
	
	
	reverse(oct.begin(),oct.end());
	
	if (oct==oct2)   return 1;
	else return 0;
	
}



int main(){
//string  oct="223322";  //"223312"
//string oct2=oct;
////翻转字符串
//reverse(oct.begin(),  oct.end());
////cout<<oct;
//
//if (oct==oct2)
// cout<<"回文字符串";
//	
//	
	
	//平方数
	
//	int   n=256;
//	
//	for (int i=1; i<=sqrt(n);i++){
//		if (i*i==n) {
//		cout<<"平方数";
//		cout<<"\n"<<i;
//		break;	
//		}
//			
//	}
//	
	
//	ll n;
//	cin>>n;
//	for (ll i=1;i<=n;i++){
//		
//		ll  i2=i;
//		string oct="";
//		for (;i2;){
//				
//			oct=     char(i2%8+48)+oct;
//			i2/=8;
//			
//		}
//		if (pfs(i)  && hws(oct))
//			cout<<i<<" ";
//		
//	}
//	
//	
	
	
	cout<<50.00<<"%";

	
	
	
	
}






//  2063  


