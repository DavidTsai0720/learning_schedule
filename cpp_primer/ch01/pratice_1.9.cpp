#include <iostream>

int main() {
    int sum = 0;
    int cur = 50;
    while ( cur <= 100 )
        sum+=cur++;
    std::cout << sum << std::endl;
    return 0;
}
