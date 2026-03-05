//全勤


//常用库函数
//与字符相关的函数
#include<bits/stdc++.h>
//#include  <stdio.h>
//#include <ctype.h>
using namespace  std;
int main(){
  //  getchar  :  输入单个字符

	// char   a,b, c;
	// //cin>>a>>b>>c;
	// //scanf("%c%c%c",&a,&b,&c);
	// a=getchar(),  b=getchar(),c=getchar();
	// cout<<a<<endl<<b<<endl<<c;

	//putchar:    输出单个字符
	// char  a='x';
	// int   b=97;
	// string    s="hello";
	// putchar(s[0]);


	//islower(x)  :  判断x是否为小写字母

	//char      zimu='a';

	//cout<<islower(zimu) ;  //任何以 is-  开头的函数的返回值都是bool类型
	//  0代表false  ,  1代表true

	//在islower函数中,  只有返回值为0才表示false,其他值都表示true


	// int   zimu=97;  // 'a'
	// printf("%d",  islower(zimu));



	//isupper(x): 判断x是否为大写字母

	//char    c='a';
	// int   c=97;
	// printf("%d\n",  isupper(c) );


	//isdigit(x)   :  判断x是否为数字  
	// digital  camera


	//char   c='1';
	// int   c=49;
	// printf("%d",   isdigit(c));



	//  isalpha(x)   :   判断x是否为字母
	//  alphabet  :  字母表

	//  alpha  :  阿尔法  
	//bet   :   贝塔

	// char     c='a';
	// printf("%d",   isalpha(c));



	//char()    :   将ASCII码转换成字符

	// int    a=98;
	// printf("%c\n",   a);   //  char()  :  在C语言中不能用

	// cout<<a;

   // C++中的类型转换可以写成   (char)a   或者   char(a)





    //   int()   :   将字符转换成ASCII码

		//char     c='a';     cout <<  char(int(c)-32);


	// char   c;
	// cin>>c;

	// if (isupper(c))  cout<<   int(c);
	// else cout<<   char(int(c)-32);










	return 0;
}


//  isupper   islower
//   输入一个字母, 如果这个字母是大写字母就输出
//这个大写字母对应的ASCII码,
//如果这个字母是小写字母就输出它对应的大写字母


//  1967~1977

