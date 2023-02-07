class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        ans.push_back(-1);
        if(arr.size() == 0 || arr.size() == 1)
            return ans;
        int m = arr[arr.size()-1];
        for(int i = arr.size()-2; i >= 0; i--) {
            ans.push_back(m);
            m = max(arr[i], m);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};