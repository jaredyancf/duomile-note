//  2005
#include <bits/stdc++.h>
using namespace std;
struct  Stu{
		int id,  piao;
};

//Stu  arr[201];   //  竞选人数组
vector<Stu>   v;
int  n,m;

bool  cmp(Stu a, Stu b){
	if (a.piao!=b.piao)
		return a.piao>b.piao;
	else
		return a.id<b.id;
}



int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
	//	arr[i].id=i;
		Stu  s;
		s.id=i;
		v.push_back(s);
	}
	
	for (int i=0;i<m;i++){
		int id;
		cin>>id;
		v[id-1].piao++;
	}
	
	sort(v.begin(),v.end(),cmp);
	cout<<(*v.begin()).id;
	
	return 0;
}
