class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                long long int remaining = target - (long long int)nums[i] - (long long int)nums[j];
                int low = j+1, high = nums.size()-1;
                while(low < high) {
                    if(nums[low] + nums[high] == remaining) {
                        vector<int> res = {nums[i], nums[j], nums[low], nums[high]};
                        ans.push_back(res);
                        while(low < high && nums[low] == res[2])
                            low++;
                        while(low < high && nums[high] == res[3])
                            high--;
                    }
                    else if(nums[low] + nums[high] < remaining)
                        low++;
                    else
                        high--;
                }
                while(j+1 < nums.size() && nums[j+1] == nums[j])
                    j++;
            }
            while(i+1 < nums.size() && nums[i+1] == nums[i])
                i++;
        }
        return ans;
    }
};