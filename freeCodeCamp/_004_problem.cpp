#include <iostream>
#include <climits>
using namespace std;

// 004 > Find Secont Maximum value in an array

int main()
{

    int arr[] = {2, 5, 3, 8, 11, 14, 0, 6, 7};

    // start
    int max = INT_MIN;
    int secMax = INT_MIN;

    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {

            secMax = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > secMax)
        {
            secMax = arr[i];
        }
    }
    cout << "Second maximum value: " << secMax << endl;

    return 0;
}