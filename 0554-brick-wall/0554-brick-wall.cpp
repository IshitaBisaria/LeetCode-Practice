class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(int i = 0; i < wall.size(); i++) {
            int pos = 0;
            for(int j = 0; j < wall[i].size()-1; j++) {
                int currLen = wall[i][j];
                pos += currLen;
                mp[pos]++;
                ans = max(ans, mp[pos]);
            }
        }
        return wall.size()-ans;
    }
};