#include <iostream>
using namespace std;

// The code assumes that the array contains all integers from 1 to (len + 1) except one number
// find missing number

int main()
{

    int arr[] = {2, 4, 1, 8, 6, 3, 7};

    // start
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len << endl;
    int sum = ((len + 1) * (len + 2)) / 2;
    cout << sum << endl;

    for (int i = 0; i < len; i++)
    {
        sum -= arr[i];
    }

    cout << "missing number in array is " << sum << endl;

    return 0;
}
