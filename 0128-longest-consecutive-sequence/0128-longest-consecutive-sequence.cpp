class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> s(nums.begin(), nums.end());
        for(auto x : s) {
            if(s.find(x-1) == s.end()) {
                int curr = 1;
                while(s.find(x + curr) != s.end())
                    curr++;
                ans = max(ans, curr);
            }
        }
        return ans;
    }
};