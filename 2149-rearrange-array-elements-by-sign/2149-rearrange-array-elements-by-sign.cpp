class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0, j = 0; max(i, j) < nums.size();) {
            while(nums[i++] < 0);
            while(nums[j++] > 0);
            ans.push_back(nums[i-1]);
            ans.push_back(nums[j-1]);
        }
        return ans;
    }
};