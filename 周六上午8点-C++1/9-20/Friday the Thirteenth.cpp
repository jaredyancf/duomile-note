//假设1900年1月1日是星期一, 在N年里每个月的
//13号是周一 周二 周三  周四  周五  周六 周日
//的天数分别是多少天


//输入: 整数N,  表示有多少年
//输出: 一行, 分别表示 周一~周日的天数
//20
//34 33 35 35  34 36 33




// 1 3 5 7 8  10 12:   31天
//4 6 9 11:  30天
//2 :平年28天   闰年  29天


#include <bits/stdc++.h>
using namespace std;

int  N;


int is_run(int year){
	if (year %100==0){
		if (year %400==0){
			return 1;
		}else{
			return 0;
		}
	}else{
		if (year%4==0){
			return 1;
		}else{
			return 0;
		}
	}
}

int get_days_of_month(int year, int month){
	if ( month ==2) {
		if (is_run(year))  return 29;
		else return 28;
	}

	if (month == 4 || month == 6 || month == 9 || month == 11) {
	      return 30;
	    }
	return 31;
}


int main(){
	cin>>N;
	
	long long days=0,  z1=0,z2=0,z3=0,z4=0,z5=0,z6=0,z7=0;
	
	for (int year = 1900;   year<1900+N; year++){
		for (int month=1;month<=12;month++){
			days+=13;
			if (days%7==0){
				z7++;
			}else if (days%7==1){
				z1++;
			}else if (days%7==2){
				z2++;
			}else if (days%7==3){
				z3++;
			}else if (days%7==4){
				z4++;
			}else if (days%7==5){
				z5++;
			}else if (days%7==6){
				z6++;
			}
			
			days+=get_days_of_month(year, month);
						
		}
		
	}
	
	cout<<z1<<" "<<z2<<" "<<z3<<" "<<z4<<" "<<z5<<" "<<z6<<" "<<z7;
	
	return 0;
}








