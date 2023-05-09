class Solution {
public:
    void dfs(vector<vector<int>>& image, int curr, int color, int i, int j) {
        if(i < 0 || i >= image.size() || j < 0 || j >= image[0].size() || image[i][j] != curr)
            return;
        image[i][j] = color;
        dfs(image, curr, color, i+1, j);
        dfs(image, curr, color, i-1, j);
        dfs(image, curr, color, i, j-1);
        dfs(image, curr, color, i, j+1);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc])
            return image;
        int curr = image[sr][sc];
        dfs(image, curr, color, sr, sc);
        return image;
    }
};