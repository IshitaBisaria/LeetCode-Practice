class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i = 0, j = nums.size()-1;
        int suml = 0;
        int sumr = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < nums.size(); i++) {
            sumr -= nums[i];
            if(suml == sumr)
                return i;
            suml += nums[i];
        }
        return -1;
    }
};