#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    map<int, int> countMap; // key: 自然数, value: 出现次数
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        countMap[num]++; // 统计每个数出现的次数
    }
    
    // map会自动按键值(自然数)从小到大排序
    for (auto& pair : countMap) {
        cout << pair.first << " " << pair.second << endl;
    }
    
    return 0;
}
