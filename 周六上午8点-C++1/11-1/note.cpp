// 将数组arr第一个元素移到末尾,其余数据一次往前平移一个位置
//输入格式:
//第一行为数组arr的元素个数
//第二行为n个小于1000的正整数
//输出格式:
//平移后的数组元素,每个数用一个空格隔开
//输入样例:
//10
//1 2 3 4 5 6 7 8 9 10
//输出样例:
//2 3 4 5 6 7 8 9 10 1


#include <bits/stdc++.h>
using namespace std;
//int arr[1010],n;







//4567212   1224567
int  is_same1(int n){
	vector<int>  vec;

	while(n){
		vec.push_back(n%10);
		n /= 10;
	}
	
	if (vec.size()!=7) return 0;
	sort(vec.begin(), vec.end());
	
	
	for (int i=1; i<=vec.size()-1;i++){
		if (vec[i]==vec[i-1]) return 0;
	}
	return 1;
}








int main(){
	

//	int  n;
//	cin>>n;
//	vector<int>   vec(n);
//	for (int i=0;i<=n-1;i++){
	//	cin>>vec[i];
//		int t;
//		cin>>t;
//		vec.push_back(t);
//	}
//	int tmp=vec[0];
	
//	cout<<tmp;
//for (auto x:vec)   cout<<x<<" ";
//	for (int i=1;i<=n-1;i++){
	//	arr[i-1]=arr[i];
//	vec[i-1]=vec[i];
//	}
//	vec[n-1]=tmp;
	
	
//	
//	
//	
//	for (int i=0;i<=n-1;i++){
//		cout<<vec[i]<<" ";
//	}
	
	
	
	
	
	
	
	int from,to;
	cin>>from>>to;
	
	for (int i=from; i<=to; i++){
		if (is_same1(i*i)) cout<<i<<endl;
	}
	
	
	
	

	
	
	
	
	return 0;
}
