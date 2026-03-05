#include <bits/stdc++.h>

using namespace std;



int a[10];
int main(){
	
//	int n,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c0=0;
//	cin>>n;
//	for (int i=1;i<=n;i++){
//		// 1 2 3 4 5 6 7 8 9 10 11
//		string s="";
//		int tmp=i;
//		while (tmp){
//			s+=char(tmp%10+48);
//			tmp/=10;
//		}
//		
//		for (int j=0; j<=s.size()-1;j++){
//			if (s[j]=='0') c0++;
//			if (s[j]=='1') c1++;
//			if (s[j]=='2') c2++;
//			if (s[j]=='3') c3++;
//			if (s[j]=='4') c4++;
//			if (s[j]=='5') c5++;
//			if (s[j]=='6') c6++;
//			if (s[j]=='7') c7++;
//			if (s[j]=='8') c8++;
//			if (s[j]=='9') c9++;
//		}
//		
//	}
//	
//	cout<<c0<<endl;
//	cout<<c1<<endl;
//	cout<<c2<<endl;
//	cout<<c3<<endl;
//	cout<<c4<<endl;
//	cout<<c5<<endl;
//	cout<<c6<<endl;
//	cout<<c7<<endl;
//	cout<<c8<<endl;
//	cout<<c9<<endl;	
//	
	
	
//	

//		int i=109;
//		string s="";
//		while (i){
//				s=char(i%10+48)+s;
//				i/=10;
//		}
//		
//		cout<<s;
//			
	
	
	
	//printf
		//2222222.101  222222.2101*10
		// fixed 固定的  
		//set设置  precision精度
		//保留两位小数
//	double    a=2222222.105;
//
//	cout<<fixed<<setprecision(2)<<a;

		
//	cin>>a[0];
//	for (int i=0;i<=9;i++)
//		cin>>a[i];
	
	
	
//	vector<int>  v(10,  1);
//	vector<int>  v{1,2,3,4,5};
//	for (int x:v)
//	cout<<x<<endl;
//	
//	cout<<v.size();
//	



	//vector的迭代器
	
	//传统的下标访问
//	for (int i=0;i<=v.size()-1;i++)
//	cout<<v.at(i)<<endl;
	//	cout<<v[i]<<endl;
	
	//迭代器遍历vector
	vector<int>  v{1,2,3,4,5};
	auto  it=v.begin();
	
	for (;it!=v.end();it++)
		cout<<*it<<endl;

	//下节课讲指针
	
	
	
	
	
	return 0;
}
