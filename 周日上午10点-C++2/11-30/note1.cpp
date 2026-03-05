#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "需要参数" << std::endl;
        return 1; // 表示错误
    }
    
    std::cout << "程序执行成功" << std::endl;
    return 0; // 表示成功
}
