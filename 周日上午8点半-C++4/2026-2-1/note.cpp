//   出勤 :  程季朗

//if语句

//  if   :  如果

// 如果 语文考了100分, 那么去香港玩
// 如果 语文考了>=90 并且 <100分, 那么去张湖公园玩
// 如果 语文考了  >=60  并且 <90分,  那么去菱湖公园玩
// 如果 语文考了  <60分,  那么在家写作业 
#include <bits/stdc++.h>
using namespace std;
int main(){

	int yuwen;
	cin>>yuwen;
	if (yuwen == 100){   
		cout<<"Hong Kong";
	}else if(yuwen>=90  &&  yuwen<100){  //  else 否则 
		cout<<"Zhanghu Park";
	}else if (yuwen>=60  &&  yuwen<90){
		cout<<"Linghu Park";
	}else if (yuwen<60){
		cout<<"doing homework";
	}

	return 0;
}


//  =  表示赋值
//  == 表示相等
//  != 表示不等于
// >=
// <=
// >
//<

//  &&  与,  并且


//1303  1033  1302   1632   1043  1037  1034