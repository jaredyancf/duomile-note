//   1389  4893   2089   2094


#include<bits/stdc++.h>
using namespace  std;
//

//void say_hello(){
//	cout<<"hello";
//}
//
//
//int add(int a,int b){
//	return a+b;
//}



int  is_huiwen(string  n){
	int len  =  n.size();
	string new_n="";
	for (int i=len-1; i>=0;i--){
		new_n=new_n+n[i];
	}
	
	if (n==new_n){
		return 1;
	}else{
		return 0;
	}
}





int main(){
	
	
	int X;
	cin>>X;
	while (1){
		X++;
		string n=to_string(X);
		if (is_huiwen(n)){
			cout<<n;
			break;
		}
			
	}
	
	
	
	//say_hello();
	
//	int s=add(1,2);
//	cout<<s;
//	cout<<is_huiwen("12321");



// 使用下标访问字符串中的元素
//string    s="hello";
//cout<<s[0]<<endl;
//字符串的长度
//cout<<s.size();

//for(int i=s.size()-1;i>=0;i--){
//	//TODO
//	cout<<s[i]<<endl;
//}





	
	return 0;
}
