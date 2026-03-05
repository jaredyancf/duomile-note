// #include<bits/stdc++.h>
// using namespace std;

// //  1~100
// void    print1(int  begin  ,  int n){



// 	int ge=begin%10;
// 	if (ge==1 || ge==3 ||ge==5|| ge==7)
// 		cout<<begin<<endl;

// 	if (begin==n) return;

// 	print1(begin+1, n);


	

// }


// int main(){


// 	print1(1,100);



// 	//cout<<fixed<<setprecision(1)<<n;


// 	//float   n;






// 	int    n=1234;
// 	int  g=n/1%10,  s=n/10%10,  b=n/100%10,q=n/1000%10;







// 	return 0;
// }



//戴梓超:   4866  1026~1032

// 1881


//https://oj.czos.cn/p/1469


// #include <iostream>
// using namespace std;

// // 递归函数：统计从 1 到 n 的所有整数中，数字 x 出现的次数
// int countOccurrences(int n, int x) {
//     // 递归的终止条件：当 n 减小到 0 时，没有数字需要统计，返回 0
//     if (n == 0) {
//         return 0;
//     }

//     // 1. 先统计当前数字 n 本身包含多少个 x
//     int countInCurrent = 0;
//     int temp = n;
//     while (temp > 0) {
//         if (temp % 10 == x) {
//             countInCurrent++;
//         }
//         temp /= 10;
//     }

//     // 2. 递归调用：统计从 1 到 n-1 中 x 出现的次数
//     // 3. 将两部分的结果相加并返回
//     return countInCurrent + countOccurrences(n - 1, x);
// }

// int main() {
//     int n, x;
//     cin >> n >> x;

//     // 调用递归函数并输出结果
//     cout << countOccurrences(n, x) << endl;

//     return 0;
// }




// https://oj.czos.cn/p/1011


#include<bits/stdc++.h>
using  namespace std;
int main(){


	int n;
	cin>>n;
	int qian3=n/1000,hou3=n%1000;
	if (qian3>hou3) cout<<n;
	else cout<<hou3*1000+qian3;

	return 0;
}