#include <iostream>
using namespace std;

// 003 > Find minimum value of given array

int main()
{
    int arr[] = {5, 11, 5, 7, 1, 10, 8, 3};

    // start
    int MIN = arr[0];
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "Input arr  : ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
        if (arr[i] < MIN)
        {
            MIN = arr[i];
        }
    }
    cout << endl;

    cout << "Min value of array > " << MIN << endl;

    return 0;
}