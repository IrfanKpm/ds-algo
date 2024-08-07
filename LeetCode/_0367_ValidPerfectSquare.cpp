class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 0) return false;
        long left = 1, right = num;
        while (left <= right) {
            long mid = left + (right - left) / 2;  
            long midSquare = mid * mid;
            if (midSquare == num) return true;
            else if (midSquare < num) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
};
