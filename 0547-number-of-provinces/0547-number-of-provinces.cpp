class Solution {
public:
    void dfs(vector<int> adj[], vector<int>& vis, int i) {
        vis[i] = 1;
        // for(int j = 0; j < adj[i].size(); j++) {
        //     if(!vis[j]) {
        //         dfs(adj, vis, j);
        //     }
        // }
        for(auto it : adj[i]) {
            if(!vis[it]) {
                dfs(adj, vis, it);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> adj[n];
        vector<int> vis(n, 0);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(!vis[i]) {
                    ans++;
                    dfs(adj, vis, i);
                }
            }
        }
        return ans;
    }
};