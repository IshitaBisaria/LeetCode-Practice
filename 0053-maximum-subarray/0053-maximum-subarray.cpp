class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int currsum = 0;
        for(int i = 0; i < nums.size(); i++) {
            currsum += nums[i];
            ans = max(ans, currsum);
            if(currsum < 0)
                currsum = 0;
        }
        return ans;
    }
};