class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = INT_MIN;
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
                ans = max(ans, count);
            } else {
                count = 0;
            }
        }
        return max(ans, count);
    }
};