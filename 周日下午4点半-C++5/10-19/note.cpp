//董小雅   江一严  储语新  王清瑜




#include <bits/stdc++.h>
using namespace std;
int main(){
//	for (int ji=1;  ji<50;ji++){
//		for (int tu=1;tu<40;tu++){
//			if (ji+tu==50 && ji*2+tu*4==160)
//				cout<<ji<<" "<<tu;
//		}
//	}
//	




//		for (int cheng=1;cheng<5;cheng++){
//			for (int er=40/3;er>=1;er--){
//				if (cheng*8+er*3==40)
//					cout<<cheng<<" "<<er<<endl;
//			}
//		}
//

//		int  x,a,b,cnt=0;  // x总钱数  a狗价格 b猫价格
//		cin>>x>>a>>b;
//		
//		for (int gou=1; gou<=x/a;gou++){
//			for (int mao=1; mao<=x/b;mao++){
//				if (gou*a+mao*b==x)
//					cnt++;
//			}
//		}

//		cout<<cnt;
		
		
		
//		int   n,x,y,  max_m=0,  dan;
//		cin>>n>>x>>y;
//		
//		for (int m=1;m<=n/x;m++){
//			for (int d=1;d<=n/y;d++){
//				if (m*x+d*y==n && m>max_m){
//					max_m=m;
//					dan=d;
//				}
//			}
//		}
//	cout<<max_m<<" "<<dan;
//	

//
//	for (int diao=1;diao<17; diao++){
//		if ((17-diao)*2==25+diao)
//			cout<<diao;
//	}

//	int n,x,y;
//	cin>>n>>x>>y;
//	for (int lan=1;lan<=n/x;lan++){
//		for (int pai=n/y;pai>=1;pai--){
//			if (lan*x+pai*y==n  && lan+pai>50)
//			cout<<lan<<" "<<pai<<endl;
//		}
//	}
//	


	int x,da,xiao;
	cin>>x>>da>>xiao;
	
	for (int da_s=1; da_s<=x/da;da_s++){
		for (int xiao_s=1;xiao_s<=x/xiao;xiao_s++){
			
			if (da_s*da+xiao_s*xiao==x  && da_s%2==0 && xiao_s%2==0)
				cout<<da_s<<" "<<xiao_s<<endl;
			
		}
	}










	return 0;
}








//1015   1351   1016  1220  1227 1349  
// 1396  1792









