class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> s(nums1.begin(), nums1.end());
        for(auto x : nums2) {
            if(s.count(x)) {
                ans.push_back(x);
                s.erase(x);
            }
        }
        return ans;
    }
};