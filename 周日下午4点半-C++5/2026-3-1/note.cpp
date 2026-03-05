//出勤:  舒江阅  储语新



//与整型相关的函数



#include <bits/stdc++.h>
using namespace std;
int main(){

	//abs函数:  求绝对值
	// abs 是absolute的缩写
	// int   n   =   -110;
	// cout<<abs(n);

	//max函数 :求最大值
	//int   a=1,b=2,c=3,d=4;
	//cout<<max(max(max(a,b),c),d);
	//cout<<max({a,b,c,d});

	//min函数:  求最小值
	//cout<<min({a,b,c,d});



	//swap(a,b) 函数:交换a b的值


	//int   a=1,b=10;
	//下面代码不能实现交换
	// a=b;
	// b=a;


	//Python代码
	//a,b=b,a

	//方法1
	// int  tmp;
	// tmp=a;
	// a=b;
	// b=tmp;


	//方法2
	//swap(a,b);
	//cout<<a<<" "<<b;





	//int函数:  这是一个类型转换函数,把float转换成int
	
	// float  a=111.8f;

	// //cout<<int(a);
	// cout<<(int)a;

	//pow(x,y)函数: 返回x的y次方, x  y可以是浮点数

	//int   x=10,y=3;
	//char  x='a',y='0';
	//cout<<pow(x,y)<<endl;
	//cout<<pow(97,48);


	//rand函数:  产生一个0~99的随机数
	//srand(static_cast<unsigned int>(std::time(nullptr));

	//time函数返回一个时间戳 

	//srand(time(0));  // 产生一个随机数种子
	//cout<<rand();
	//cout<<time(0);



	//static_cast<int>函数:  类型转换函数
	//unsigned int 简写为unsigned: 表示无符号整数
	// float  n=11.9;
	// int n2=112;
	//cout<<static_cast<int>(n);
	//auto sn=static_cast<float>(n2);
	//string   a="111";
	// bool  a=true;
	// auto  sn=static_cast<int>(a);
	// cout<<sn<<endl;
	// cout<<typeid(sn).name();  //查看sn的类型
	// f  浮点数  i  整数

	// int   n,cnt=0;
	// cin>>n;


	// for (int i=1;i<=n;i++){
	// 	int tmp=i;
	// 	while (tmp){
	// 		if (tmp%10==0) {
	// 			cnt++;
	// 			break;
	// 		}
	// 		tmp/=10;  // 102
	// 	}
	// }
	// cout<<cnt;





	int  n=100;
	string s=to_string(n);
	cout<<typeid(s).name();




	return 0;
}


//  假设今天周日,那么过a^b天后是星期几?
//输入:
//a  b
//输出:
//整数,表示星期几


//oj.czos.cn 
//1389  1750   1962  1121