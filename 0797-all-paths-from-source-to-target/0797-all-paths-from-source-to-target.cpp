class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void dfs(vector<vector<int>>& g, int curr, int d) {
        temp.push_back(curr);
        if(curr == d)
            ans.push_back(temp);
        else
            for(auto n : g[curr])
                dfs(g, n, d);
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        int s = 0, d = n-1;
        dfs(graph, s, d);
        return ans;
    }
};