
//vectorÔªËØÅÅĞò
#include <bits/stdc++.h>
using namespace std;
vector<int>  vec{1,3,2,4,77,6,5,33};

int cmp(int a,int b){
	return a>b;
}

int main(){
	
	sort(vec.begin(),  vec.end(),  cmp);
	
	for (auto x:vec) cout<<x<<" ";
	return 0;
}
