#include <iostream>

int main() {
    std::cout << "Enter numbers:" << std::endl;
    long long sum = 0;
    int value = 0;
    while ( std::cin >> value )
        sum += value;
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}
