#include<bits/stdc++.h>
using  namespace  std;

int main(){
//	
//	map<string,  string>  m;
//	pair<string,  string> p={"name","laowang"};
//	m.insert( p );
//	p={"name2","laowang"};
//	m.insert( p );
//	p={"name3","laowang"};
//	m.insert( p );
//		
//	auto  it=m.begin();
//	cout<<"{\n";
//	for (; it != m.end();  it++){
//		cout<< "{\"" <<it->first <<"\",\""<<it->second<<"\"},"<<endl;
//	}
//	
//	cout<<"}";










//	map<int, string> m=
//            {
//                {1, "A"},
//                {3, "C"},
//                {5, "B"}
//            }
//    ;
//    cout << "遍历前元素的个数：" << m.size() << endl;
//    for (int i = 0; i < m.size(); i++) {
//        cout << i << ' ' << m[i] << endl;
//    }
//    cout << "遍历后元素的个数：" << m.size();


//map<int  ,  int >   m;
//m[1];  //   {1, 0 }     {1,  ""}
//cout<<m.size()<<endl;
//cout<<m[1]<<endl;
//cout<<typeid(m[1]).name();



//删除元素

map<int, string> m=
            {
                    {1, "A"},
                    {2, "B"},
                    {3, "C"}
            }
    ;
    //清空
    m.clear();//{}
    if (m.empty()) {//判断map为空则返回true
        m.insert(pair<int, string>(4, "D"));
        m.insert(pair<int, string>(5, "E"));
        m.insert(pair<int, string>(6, "F"));

        //用迭代器删除单个元素，注意指针被删除后就失效了
        //map<int, string>::iterator iter = m.begin();
        
        
        
       // m.erase(iter);//所剩元素{5,E},{6,F}，此时的iter仍然是{4,D}
       // iter = m.begin();
      //  cout<<iter->first<<" "<<iter->second;
       // cout << "错误的迭代器内容：" << iter->first << ' ' << iter->second << endl;
		
        //删除一个范围， 只保留最后一个
        m.erase(m.begin(), ++m.end()); //{6,F}

        //通过关键字索引的数据存在就删除，并返回1；如果关键字索引的数据不存在就不操作，并返回0
       // m.erase(2);

    }
    map<int, string>::iterator iter;
    for (iter = m.begin(); iter != m.end(); iter++) {
        cout << iter->first << ' ' << iter->second << endl;
    }

//compare    comp   cmp

	return  0;
}










//  用于强行使迭代器失效的编译参数: 
// -D_GLIBCXX_DEBUG
//
//主要功能：
//1.容器(vector, map)边界检查：

//2.迭代器有效性验证：

//3. 容器前提条件检查：

//4. 算法参数验证：
//检查排序算法的比较函数是否满足严格弱序要求
//验证范围操作的迭代器是否形成有效范围
















//下节课讲解  :   m.erase(m.begin(), ++m.end()); //{6,F}
