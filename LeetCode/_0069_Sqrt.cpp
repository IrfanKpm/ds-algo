class Solution {
public:
    int mySqrt(int x) {
        //binary search
        int left = 0;
        int right = x;
        long long int mid;
        while(left<=right){
            mid = (left+right) / 2;
            if (mid*mid < x) left = mid+1;
            else if(mid*mid > x) right = mid-1;
            else return mid;
        }
        return right;
    }
};
