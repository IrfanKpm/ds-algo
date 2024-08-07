#include <iostream>
using namespace std;

int main()
{
    int a = 5; // binary: 0101

    int result = ~a; // binary: 1010 (in two's complement), which is -6 in decimal

    cout << "Bitwise NOT of " << a << " is " << result << endl;
    return 0;
}
