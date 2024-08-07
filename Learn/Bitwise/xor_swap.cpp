#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    a = a ^ b; // a = 30
    b = a ^ b; // b = 10
    a = a ^ b; // a = 20

    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
