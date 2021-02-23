#include <iostream>
#include <algorithm>

int main() {
    std::cout << "Enter two number:" << std::endl;
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    int a = std::min(num1, num2);
    int b = std::max(num1, num2);
    while ( num1 <= num2 )
        std::cout << num1++ << std::endl;
    return 0;
}
