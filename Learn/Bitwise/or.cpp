#include <iostream>
using namespace std;

int main()
{

    int a = 5; // binary: 0101
    int b = 3; // binary: 0011

    int result = a | b; // binary: 0111, which is 7 in decimal
    cout << "Bitwise OR of " << a << " and " << b << " is " << result << endl;
    return 0;
}