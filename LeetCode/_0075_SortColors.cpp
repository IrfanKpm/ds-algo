class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int left = 0;     // Pointer for 0s
        int current = 0;  // Pointer for current element
        int right = n - 1; // Pointer for 2s
        while (current <= right) {
            if (nums[current] == 0) {
                swap(nums[current], nums[left]);
                left++;
                current++;
            } else if (nums[current] == 1) {
                current++;
            } else if (nums[current] == 2) {
                swap(nums[current], nums[right]);
                right--;
        }
    }
    }
};
