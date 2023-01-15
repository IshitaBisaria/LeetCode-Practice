class Solution {
public:
    int ans;
    void count(vector<int>& nums, int low, int mid, int high) {
        int l = low, h = mid+1;
        while(l <= mid && h <= high) {
            if((long)nums[l] > (long) 2 * nums[h]) {
                ans += (mid - l + 1);
                h++;
            } else
                l++;
        }
        sort(nums.begin() + low, nums.begin() + high + 1);
    }
    void mergeSort(vector<int>& nums, int low, int high) {
        if(low == high)
            return;
        int mid = (high - low)/2 + low;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);
        count(nums, low, mid, high);
    }
    int reversePairs(vector<int>& nums) {
        if(!nums.size())
            return 0;
        ans = 0;
        mergeSort(nums,0,nums.size()-1);
        return ans;
    }
};