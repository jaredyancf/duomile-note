//王子杨请假


//选择结构



#include  <bits/stdc++.h>
using  namespace  std;
int main(){
	
//	double  a=2.5;
//	//cout<<fixed<<setprecision(2)<<a;
//	printf("%.0f",a);


	string  today;
	cin>>today;
	

	
	if(today=="Sunday"){//圣代
		
		cout<<"去迪士尼";
	}else if(today=="Saturday") {
		cout<<"去大英博物馆";
	}else if(today=="Friday") {
			cout<<"去自然公园";
	}else if(today=="Thursday") {
			cout<<"疯狂星期四去肯德基";
	}else{
		cout<<"去溜达";
	}
	
	
	
		if(today=="Sunday"){//圣代
			
			cout<<"去迪士尼";
		}else{
			cout<<"去溜达";
		}
		
	
	
	
	int   n;
	cin>>n;
	if (  n>=10  ){
		printf("%.1f",  n*2.0);
	}else{
		printf("%.1f",  n*2.2);
	}
	
	
	
	
	
	
	

	//每个if语句有且只能有一个if,并且if要在开头
	//每个if语句可以有0到1个else, 不能有多个else
	//可以有0到多个else if,  并且只能放在 if 分支
	//和else分支之间
	
	
	//bool类型:  这个类型只有两个值
	// true 真 /  false  假
	//表示false的值有 0  NULL ,  
	//其他的所有值都表示true

	return 0;
}

//   oj.czos.cn
//  1303


