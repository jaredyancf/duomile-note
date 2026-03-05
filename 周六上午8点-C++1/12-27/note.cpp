//  map
#include <bits/stdc++.h>
using namespace std;
int main(){
	
//	int  arr[10]={1,2,32,34,4};
//	map<int , int,greater<int>  m={
//		{9, 11},
//		{11,44},
//		{0,77}
//		
//	};
	//map的元素我们称之为键值对(key-value)


	//insert插入
	// 当键是不存在的值，成功插入；当键已经存在，则不进行操作
//	pair<string,  string>  p={"school1","anqingwaiguoyu"};
//	m2.insert(p);

//	pair<string,  string>  p={"school1","anqingwaiguoyu"};
//	m2.insert(	pair<string,  string>{"school1","anqingwaiguoyu"});
//	m2.insert(	{"school1","anqingwaiguoyu"});
//	m2.insert(make_pair("school1","anqingwaiguoyu"));
//	cout<<m2["school1"];
	
	
	

		
//	m2["school"]="anqingwaiguoyu";//这也是插入  ,键是原先没有的，直接插入；键已经存在直接修改
//	m2.insert(	pair<string,  string>{"school","anqingwaiguoyu"});
//	cout<<m2["school"];
	
	
	
	
//	cout<<m[9];
	
//	cout<<m2["name"];
	
	//遍历map
	
	//给类型起别名
//	using str_str_map=map<string  ,string>;
//	str_str_map  m2={
//				{"name","xiaoming"},
//				{"age","11"},
//				{"school","anhui"}
//	};
//		//遍历map
//	map<string, string>::iterator  it=m2.begin();
//	for (;it!=m2.end();it++){
//		cout<<it->first<<" "<<it->second<<endl;
//	}
//	

	vector<int>   v{1,2,3,4,5};
	vector<int>::iterator   it=v.rbegin();
	for (;it!=v.rend();it++)
		cout<<*it<<endl;
	return 0;
}
