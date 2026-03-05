//  全勤
//自定义函数
// 标识符:  
//Python   C++编程语言中
//把变量名 函数名 类名 模块名等等,  称之为标识符
//标识符有一致的命名规则:
//1.标识符名字由字母  数字 下划线或者汉字组成
//2.标识符名不能以数字开头

#include<bits/stdc++.h>
using namespace std;


//自定义函数要定义在main的前面

//实现  a+b  
//带有参数和返回值的自定义函数
// int  my_add(int  a,    int  b){
// 	return a+b;   // 返回值,  要和int类型兼容
// }

//  没有参数的自定义函数

// int   show(){


// 	if (0)  return   9;

// 	else return  8;
// }



//没有返回值的自定义函数

// void   my_add(){

// 	cout<<"hello";
// }  


//函数不能嵌套定义



// void  foo(){


// 	void bar(){
// 		cout<<"hello";
// 	}
// 	bar();

// }


//变量的作用域
//   在C++中,凡是花括号都可以形成一个作用域
//被嵌套的内部作用域可以使用外部作用域中的值
//外部作用域不能使用内部作用域中的值


//int   a=100;

// void   change(){
// 	//a=1000;
// }

// void change2(int b){  
// 	int c=999;
// 	b=1000;
// }


//void    foo();

//    sqrt()   : 平方根

int   is_sushu(int  n){
	if (n==1 )  return 0;
	for  (int  i=2;  i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}

	return 1;

}


int  chunchuisushu(int   tmp){
		int flag=0;  //设flag为0时,tmp为纯粹素数
		int   chu=1000;
		while (tmp){
			
			if (! is_sushu(tmp)) {
				flag++;
				break;
			}
			tmp%=chu;
			chu/=10;
		}

		if (flag!=0) return 0;
		else return 1;

}

int main(){
	/* 

	多行注释

	*/ 

	//int    a=   my_add(1,96);
	//cout<<a;

	// int    a=show();
	// cout<<a;
	
	
	// char    c='4';    //  char类型的本质是int
	// cout<<c+1<<endl;
	



	//my_add();
	

	//foo();




	
	// int   a=100;
	
	// {
	// 	a=1000;
	// }
	
	// cout<<a;



	//change();
	//change2(a);

	//cout<<c;




	//块作用域:
	//while   for   if语句块形成的作用域

	// if (1){
	// 	int   a=10;
	// }

	// for   (int a=1;a<=2;a++ ){

	// }
	// cout<<a;


	// foo();

	for (int i=1000;i<=3000; i++){
		    if (chunchuisushu(i))  cout<<i<<endl;
		
	}
	return 0;
}  



//   1137



// void    foo(){
// 	cout<<"hello";
// }


//   false