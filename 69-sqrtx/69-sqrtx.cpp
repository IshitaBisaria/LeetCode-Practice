class Solution {
public:
    int mySqrt(int x) {
        int low = 1, high = x;
        int ans = 0;
        while(low <= high) {
            long long mid = (high - low)/2 + low;
            long long mSq = mid*mid;
            if(mSq == x)
                return mid;
            else if(mSq < x) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }
};