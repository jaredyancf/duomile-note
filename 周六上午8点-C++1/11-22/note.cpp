#include <bits/stdc++.h>
using namespace std;


int  f(int a){
	return a==33;
}

int  f2(int a){
	return a>=3;
}

int main(){
//	int  arr[]{1,2,3,66,3,4,5,6};
	//vector<int>  v{1,2,3,7,3,4,5,6};
	// 1 2 3 3 4 5 6 7
	//sort(v.begin(),v.end());
	//lower_bound(v.begin(),v.end(),3):  返回大于等于3的第一个元素的地址

	//auto 推断lower_bound函数的返回值类型为迭代器
	//auto it= lower_bound(v.begin(),v.end(),3);
//	sort(arr,arr+8);
//	int*   it= lower_bound(arr,arr+8,3);
	//up -> down   high ->low
	//upper_bound(v.begin(),v.end(),3):  返回大于3的第一个元素的地址
//	vector<int>::iterator it2=upper_bound(v.begin(),v.end(),3);
//这两个函数在使用前一定要给数组排序
//	int* it2=upper_bound(arr,arr+8,3);
//	printf("0x%p  0x%p", it,  it2);
//cout<<it2-it;
	
	
	
	
	
	
	
	
	//find  查找
	
//	vector<int>   v{1,33,4,7,8,3};
//	auto it=find(v.begin(),v.end(),33);
//	
//	if (it !=v.end())
//		cout<< "找到了";


  //find_if(v.begin(),v.end(), f )
	//f是一个谓词,
	//谓词就是返回值为bool类型的函数
	
	//find_if:  找到满足函数f里条件的值
//	vector<int>   v{1,33,4,7,8,3};
	
//	int  f(int a){
//		return a==3;
//	}
//	
	
//	auto it=find_if(v.begin(),v.end(), f );
//	cout<<(it==v.end());
	
	
	
	
	
	
	//count函数
	//count(v.begin(),v.end(),  3) :返回v中3的数量
	
//	vector<int>   v{1,33,3,3,3,4,7,8,3};
//	int  n=count(v.begin(),v.end(),  3);
//	cout<<n;
//	
	
	//count_if函数
	//count_if(v.begin(),v.end(),  f) 
	//f也是谓词
	//该函数返回满足f函数里条件的元素的数量
	
//	vector<int>   v{1,33,3,3,3,4,7,8,3};
//	int    n=count_if(v.begin(),v.end(),f2);
//	cout<<n;



//accumulate函数
//accumulate(v.begin(), v.end(), 0);  
//累加 

//vector<int>   v{1,2,3,4};
//
//int  s=accumulate(v.begin(), v.end(), 10);
//cout<<s;


//max最大值
//vector<int>   v{1,2,3,4};
//
//int   n=max({10,20,4,55});
////max(a,b);
//cout<<n;

//min最小值


int   n=min({10,20,4,55});
//max(a,b);
cout<<n;






	return 0;
}
