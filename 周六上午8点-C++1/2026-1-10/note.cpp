
//   oj.czos.cn 

//1762   1764

#include <bits/stdc++.h>
using namespace std;
int main(){
	
	
//	map<string ,  int >  m;
//	int   n, q;
//	cin>>n>>q;
//	
//	for (int i=0;i<n;i++){
//		string name;
//		int num;
//		cin>>name>>num;
//		m[name]=num;
//	}
	
	
	
//	auto  it=m.begin();
//	
//	for (;it!=m.end();it++){
//		cout<<it->first<<" "<<it->second<<endl;
//	}
	
//	for (int i=0;i<q;i++){
//		string name;
//				
//		cin>>name;
//		cout<<m[name]<<endl;
//	}
	

	
	vector<long  long>  v;
	int  n;
	cin>>n;
	
	for (int i=0;i<n;i++){
		long long num;
		cin>>num;
		v.push_back(num);
		
	}
	
	sort(v.begin(),v.end());
	
	
	map<int  ,   int>  m;
	for (int   i =0;  i<n;  i++){
		bool  flag=0;
		for (  auto  it=m.begin();  it!=m.end();   it++){
			if (it->first== v[i]) flag=1;
		}
		
		if (!flag)
			m[v[i]]=1;
		else 
			m[v[i]]++;
		
	}
	
	
	auto   it =m.begin();
	for (;it!=m.end();  it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

