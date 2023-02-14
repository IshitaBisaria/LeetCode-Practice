class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1)
            return;
        k = k % n;
        int a = nums.size() - k;
        reverse(nums.begin(), nums.begin() + a);
        reverse(nums.begin() + a, nums.end());
        reverse(nums.begin(), nums.end());
    }
};