class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, vector<int>& vis, int i) {
        vis[i] = 1;
        for(int j = 0; j < isConnected[i].size(); j++) {
            if(isConnected[i][j] && !vis[j]) {
                dfs(isConnected, vis, j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        // vector<int> adj[n];
        vector<int> vis(n, 0);
        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < n; j++) {
        //         if(isConnected[i][j] == 1 && i != j) {
        //             adj[i].push_back(j);
        //             adj[j].push_back(i);
        //         }
        //     }
        // }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(!vis[i]) {
                    ans++;
                    dfs(isConnected, vis, i);
                }
            }
        }
        return ans;
    }
};