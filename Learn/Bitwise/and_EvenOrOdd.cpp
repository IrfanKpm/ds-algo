#include <iostream>
using namespace std;

int main()
{
    int number = 7; // binary: 0111

    bool isEven = (number & 1) == 0; // binary AND with 1 to check if the least significant bit is 0

    cout << number << " is " << (isEven ? "even" : "odd") << endl;
    return 0;
}
