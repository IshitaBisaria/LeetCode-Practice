class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0)
            return 0;
        unordered_map<int, int> mp;
        for(auto x: nums)
            mp[x]++;
        int ans = 0;
        for(auto x: mp) {
            if(k > 0 && mp.find(x.first - k) != mp.end() || k == 0 && x.second > 1)
                ans++;
        }
        return ans;
    }
};