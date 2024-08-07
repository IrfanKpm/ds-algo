#include <iostream>
using namespace std;

int main()
{
    int a = 5; // binary: 0101
    int b = 3; // binary: 0011

    int result = a & b; // binary: 0001, which is 1 in decimal

    cout << "Bitwise AND of " << a << " and " << b << " is " << result << endl;
    return 0;
}
