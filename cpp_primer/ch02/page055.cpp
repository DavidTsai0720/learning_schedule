#include <iostream>

using namespace std;

int main() {
    int ival = 1024;
    int *pi = 0;    // pi = nullptr
    int *pi2 = &ival;
    if ( pi == nullptr ) //true
        cout << "hello" << endl;
    if ( pi ) //false
        cout << "pi" << ',' << pi << endl;
    if ( pi2 ) // true
        cout << "pi2" << ',' << *pi2 << endl;
    return 0;
}
