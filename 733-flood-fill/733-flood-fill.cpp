class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int color, int c) {
        if(i < 0 || i >= image.size() || j < 0 || j >= image[0].size() || image[i][j] != c)
            return;
        image[i][j] = color;
        dfs(image, i+1, j, color, c);
        dfs(image, i, j+1, color, c);
        dfs(image, i-1, j, color, c);
        dfs(image, i, j-1, color, c);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc])
            return image;
        dfs(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};