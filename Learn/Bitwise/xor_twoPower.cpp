#include <iostream>
using namespace std;

/*
 * Bitwise Shift Operations:
 *
 * 1. Left Shift (<<):
 *    - Syntax: number << power
 *    - Operation: Multiplies `number` by 2^power.
 *    - Example:
 *      - 5 << 3 is 5 * 2^3 = 5 * 8 = 40
 *      - 6 << 2 is 6 * 2^2 = 6 * 4 = 24
 *      - 10 << 1 is 10 * 2^1 = 10 * 2 = 20
 *
 * 2. Right Shift (>>):
 *    - Syntax: number >> power
 *    - Operation: Divides `number` by 2^power (integer division).
 *    - Example:
 *      - 40 >> 3 is 40 / 2^3 = 40 / 8 = 5
 *      - 24 >> 2 is 24 / 2^2 = 24 / 4 = 6
 *      - 20 >> 1 is 20 / 2^1 = 20 / 2 = 10
 */

// Function to multiply a number by 2^power using left shift
int multiplyByPowerOfTwo(int number, int power)
{
    return number << power; // Equivalent to number * 2^power
}

int main()
{
    int number = 5;
    int power = 3; // Multiply by 2^3 = 8

    cout << number << " multiplied by 2^" << power << " is " << multiplyByPowerOfTwo(number, power) << endl;

    // Additional Examples
    int number1 = 6;
    int power1 = 2; // Multiply by 2^2 = 4
    cout << number1 << " multiplied by 2^" << power1 << " is " << multiplyByPowerOfTwo(number1, power1) << endl;

    int number2 = 10;
    int power2 = 1; // Multiply by 2^1 = 2
    cout << number2 << " multiplied by 2^" << power2 << " is " << multiplyByPowerOfTwo(number2, power2) << endl;

    return 0;
}
