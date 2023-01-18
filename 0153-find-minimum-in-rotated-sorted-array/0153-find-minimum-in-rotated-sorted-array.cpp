class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while(low <= high) {
            if(nums[low] < nums[high])
                return nums[low];
            int mid = low + (high - low)/2;
            int prev = (mid - 1 + n) % n;
            int next = (mid + 1) % n;
            if(nums[mid] <= nums[prev] && nums[mid] <= nums[next])
                return nums[mid];
            else if(nums[mid] >= nums[low])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};