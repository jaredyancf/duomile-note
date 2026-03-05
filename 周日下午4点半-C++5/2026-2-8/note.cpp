//储语新  舒江阅

#include<bits/stdc++.h>
using  namespace  std;



int  main(){
	// char  c1,c2;
	// cin>>c1>>c2;

	// for (int i=c1;  i<=c2;i+=2){
	// 	cout<< (char)i<< " ";   //  char(i)
	// }
    // cout<<endl;
	// for (int i=c2;  i>=c1;i-=2){
	// 	cout<< (char)i<< " ";
	// }

	//int  a=1;
	//if (  ! (a==1))   //  if (a!=1)
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int  n;
	cin>>n;

// 4
// Test
// data
// 2-TEST
// problem-6


	for (int i=0;i<n;i++){
		string s;      
		cin>>s;
		if (islower(s[0])) {
			cout<<char(s[0]-32);
			for (int j=1;j<s.size();j++){
				if (isupper(s[j])) cout<<char(s[j]+32);
				else cout<<s[j];
			}
			cout<<endl;
		}else{
			cout<<s[0];
			for (int j=1;j<s.size();j++){
				if (isupper(s[j])) cout<<char(s[j]+32);
				else cout<<s[j];
			}
			cout<<endl;
		}
	}



	return 0;
}

//  oj.czos.cn
//  1967~1977
//  2130   4781  2286  1096
 

 //   s.size()  :  返回字符串长度


//作业:   1096
