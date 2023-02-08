class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 0; i < numRows; i++) {
            vector<int> v;
            int value;
            for(int j = 0; j <= i; j++) {
                if(i == 0 || j == 0)
                    value = 1;
                else
                    value = value * (i-j+1)/j;
                v.push_back(value);
            }
            ans.push_back(v);
        }
        return ans;
    }
};