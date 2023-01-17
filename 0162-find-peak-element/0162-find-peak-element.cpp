class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return 0;
        int low = 0, high = n - 1;
        while(low <= high) {
            int mid = (high - low)/2 + low;
            if((mid == 0 || nums[mid - 1] < nums[mid]) && (mid == n-1 || nums[mid] > nums[mid + 1]))
                return mid;
            else if(mid > 0 && nums[mid] < nums[mid - 1])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
    }
};