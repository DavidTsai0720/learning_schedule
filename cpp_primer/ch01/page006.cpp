#include <iostream>

/*
endl -- flush buffer
ostream << 
>> istream
*/

int main() {
    std::cout << "Enter two number:" << std::endl;
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1+num2 << std::endl;
    return 0;
}
