class Solution {
public:
    bool isValid(vector<vector<int>>& grid, int i, int j) {
        if(i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == 1)
            return true;
        return false;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        int fresh = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1)
                    fresh++;
                if(grid[i][j] == 2)
                    q.push({i, j});
            }
        }
        int ans = 0;
        while(!q.empty()) {
            ans++;
            int s = q.size();
            while(s--) {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                if(isValid(grid, i-1, j)) {
                    grid[i-1][j] = 2;
                    q.push({i-1, j});
                    fresh--;
                }
                if(isValid(grid, i+1, j)) {
                    grid[i+1][j] = 2;
                    q.push({i+1, j});
                    fresh--;
                }
                if(isValid(grid, i, j-1)) {
                    grid[i][j-1] = 2;
                    q.push({i, j-1});
                    fresh--;
                }
                if(isValid(grid, i, j+1)) {
                    grid[i][j+1] = 2;
                    q.push({i, j+1});
                    fresh--;
                }
            }
        }
        if(fresh > 0)
            return -1;
        if(ans == 0)
            return ans;
        return ans-1;
    }
};