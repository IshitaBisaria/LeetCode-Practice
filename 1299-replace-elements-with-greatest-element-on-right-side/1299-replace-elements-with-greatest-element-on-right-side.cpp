class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size(), 0);
        ans[ans.size()-1] = -1;
        if(arr.size() == 0 || arr.size() == 1)
            return ans;
        int m = arr[arr.size()-1];
        for(int i = arr.size()-2; i >= 0; i--) {
            ans[i] = m;
            m = max(arr[i], m);
        }
        return ans;
    }
};