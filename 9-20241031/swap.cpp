#include <iostream>

// 函数声明，使用指针参数
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    // 调用函数，传递x和y的地址
    swap(&x, &y);

    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}