#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 5, 2, 0, 3, 0, 2, 0, 1};

    int len = sizeof(arr) / sizeof(arr[0]);

    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] != 0 && arr[j] == 0)
        {
            arr[j] = arr[i];
            arr[i] = 0;
        }
        if (arr[j] != 0)
        {
            j++;
        }
    }

    cout << "Result arr  : ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}