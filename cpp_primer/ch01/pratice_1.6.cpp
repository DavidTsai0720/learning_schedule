#include <iostream>

int main() {
    std::cout << "Enter two number:" << std::endl;
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    std::cout << "The sum of " << num1 ;
    std::cout << " and " << num2; // ostream <<
    std::cout << " is " << num1+num2 << std::endl; // ostream <<
    return 0;
}
