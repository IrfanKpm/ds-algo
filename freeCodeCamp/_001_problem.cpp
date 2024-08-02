#include <iostream>
using namespace std;

// problem 001 > Given an array of integers,return an array with even integers removed.

int main()
{
    // input array
    int arr[] = {2, 5, 3, 1, 6, 9, 8, 6, 1, 4};

    // start
    int size_of_arr = sizeof(arr) / sizeof(arr[0]);
    // cout << size_of_arr << endl;
    // cout << arr[size_of_arr - 1];
    int oddCount = 0;
    cout << "Given array : ";
    for (int j = 0; j < size_of_arr; j++)
    {
        if (arr[j] % 2 == 1)
        {
            oddCount += 1;
        }
        cout << arr[j] << " ";
    }
    cout << endl;
    int result[oddCount];
    int index = 0;
    for (int j = 0; j < size_of_arr; j++)
    {
        if (arr[j] % 2 == 1)
        {
            result[index] = arr[j];
            index += 1;
        }
    }

    cout << "Array with even integers removed : ";
    for (int i = 0; i < oddCount; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}