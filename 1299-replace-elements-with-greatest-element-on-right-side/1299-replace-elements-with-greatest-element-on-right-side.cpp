class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, 0);
        int m = arr[n-1];
        ans[n-1] = -1;
        for(int i = n-2; i >= 0; i--) {
            ans[i] = m;
            m = max(m, arr[i]);
        }
        return ans;
    }
};