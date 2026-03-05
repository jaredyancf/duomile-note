#include<bits/stdc++.h>
using namespace  std;
int  cmp(int a, int b){
	return a<b;     
}



int main(){
	int   a[10]  =  {33,2,3,4};
//	map<int ,  string >   m{
//		{4,"D"},  {5,  "E"},   {6,  "F"}
//	};
//	
//	m.erase(m.begin(),   ++m.end());
//	for (auto   it=m.begin();   it!=  m.end();  it++)
//		cout<<it->first<< " "<<  it->second<<endl;
//	

//cout<<a[10];


sort(a,a+4,cmp);
	return 0;
}
