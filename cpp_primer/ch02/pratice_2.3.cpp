#include <iostream>

using namespace std;

int main() {
    unsigned u = 10, u2 = 42;
    int a = 11, b = 42;
    cout << u - u2 << endl;
    cout << u2 - u << endl;
    cout << u - a << endl;
    cout << a - u << endl;
    return 0;
}
