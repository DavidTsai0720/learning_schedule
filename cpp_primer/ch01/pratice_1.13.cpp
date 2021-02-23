#include <iostream>
#include <algorithm>

int main() {
    int sum = 0;
    for ( int i = 50; i <= 100; i++ )
        sum += i;
    std::cout << sum << std::endl;
    std::cout << "Enter two number:" << std::endl;
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    int a = std::min(num1, num2);
    int b = std::max(num1, num2);
    for ( int i = a; i <= b; i++ )
        std::cout << num1++ << std::endl;
    return 0;
}
