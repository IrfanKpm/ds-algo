#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> &nums)
{
    int unique = 0;
    for (int num : nums)
    {
        unique ^= num;
    }
    return unique;
}

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 1, 4, 5, 5, 6, 6}; // Only one number (4) is not duplicated

    cout << "The unique number is " << findUnique(nums) << endl;
    return 0;
}
