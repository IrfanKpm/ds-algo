#include <iostream>
using namespace std;

// problem 002 > Reverse the given array or string

int main()
{
    int arr[] = {2, 11, 5, 7, 10, 8, 3};

    // start
    int len = sizeof(arr) / sizeof(arr[0]);
    int left_idx = 0;
    int right_idx = len - 1;
    int temp;

    cout << "Input arr  : ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    while (left_idx < right_idx)
    {
        temp = arr[left_idx];
        arr[left_idx] = arr[right_idx];
        arr[right_idx] = temp;
        left_idx++;
        right_idx--;
    }

    cout << "Result arr  : ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}