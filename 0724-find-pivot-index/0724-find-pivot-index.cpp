class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int suml = 0, sumr = 0;
        for(int i = 0; i < n; i++)
            sumr += nums[i];
        for(int i = 0; i < n; i++) {
            sumr -= nums[i];
            if(suml == sumr)
                return i;
            suml += nums[i];
        }
        return -1;
    }
};