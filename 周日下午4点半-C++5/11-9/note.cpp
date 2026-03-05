//全勤

#include <bits/stdc++.h>
using namespace std;

int main(){
//	int x,y;
//	cout<<scanf("%d %d",&x,&y);

//不能确定个数的输入

//for (;cin>>x;){
//	cout<<x*x<<" ";// ctrl+z结束
//}

//int x;
//while (cin>>x){
////	cout<<"x*x= "<<x*x<<" ";// ctrl+z结束
//
//	if ( x<=10) cout<<x*6;
//	else if (x<=20 &&  x>=11)  cout<<60+(x-10)*2;
//	else if (x<=40 && x>=21)  cout<<80+(x-20);
//	else cout<<100;
//}


//scanf函数


//   我今年18岁

//int   age;
//float  h;
//scanf("我今年%d岁,身高%f米",&age,&h);
//cout<<age<<" "<<h;


//scanf函数是有返回值的, 如果有一个变量输入成功就
//返回1,两个返回2,以此类推

//int   age;
//float  h;
//int a=scanf("%d %f",&age,&h);
//cout<<a;

//    Hello  world  1234

//int cnt=0;
//char  c;
//while(scanf("%c", &c)  != EOF){//  end of  file  ctrl+z
//	if (c>='0' && c<='9') cnt++;
//}
//cout<<cnt;



//	int   n,he=0;
//	cin>>n;
//	
//	while(n!=0){
//		he+=  n%10;
//		n/=10;
//	}
//	
//	cout<<he;
	int   n,he=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		int g=i%10,s=i/10%10,b=i/100;
		if ((g==7 || s==7 || b==7) ||  i%7==0){
			
		}else{
			he+=i;
		}
		
	}
	cout<<he;
	
	
	return 0;
}








//  答对 0~10题  ,每题6分
//      11~20         2
//      21~40         1
//     >40        一律100分
//输入:
//10
//40
//30
//输出:
//60
//100
//90

//  输入一个整数,  要求输出各个位数字的和
// 1234   -> 10



//作业:  1393
