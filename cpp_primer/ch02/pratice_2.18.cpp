#include <iostream>

using namespace std;

int main() {
    int ival = 1024;
    int *pi = &ival;
    cout << *pi << endl;
    *pi = 2001;
    cout << *pi << endl;
    cout << ival << endl;
    *pi = *pi * *pi;
    cout << ival << endl;
    // long *c = &ival; cannot convert int to long

    int **ppi = &pi;
    cout << ppi << endl;
    cout << *ppi << endl;
    cout << **ppi << endl;
    return 0;
}

// 指標--
// 參考--一定要初始化