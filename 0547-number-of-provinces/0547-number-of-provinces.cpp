class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, vector<int>& vis, int i) {
        for(int j = 0; j < isConnected.size(); j++) {
            if(isConnected[i][j] == 1 && vis[j] == 0) {
                vis[j] = 1;
                dfs(isConnected, vis, j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        int n = isConnected.size();
        vector<int> vis(n, 0);
        for(int i = 0; i < n; i++) {
            if(vis[i] == 0) {
                dfs(isConnected, vis, i);
                ans++;
            }
        }
        return ans;
    }
};