class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            int target = -nums[i];
            if(target < 0)
                break;
            int low = i + 1, high = nums.size() - 1;
            while(low < high) {
                if(nums[low] + nums[high] == target) {
                    vector<int> res = {nums[i], nums[low], nums[high]};
                    ans.push_back(res);
                    while(low < high && nums[low] == res[1])
                        low++;
                    while(low < high && nums[high] == res[2])
                        high--;
                }
                else if(nums[low] + nums[high] + nums[i] < 0)
                    low++;
                else
                    high--;
            }
            while(i+1 < nums.size() && nums[i+1] == nums[i])
                i++;
        }
        return ans;
    }
};