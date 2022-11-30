class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int hash1[9][9] = {0}, hash2[9][9] = {0}, hash3[9][9] = {0};
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    int n = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
                    if(hash1[i][n] || hash2[j][n] || hash3[k][n])
                        return false;
                    hash1[i][n] = hash2[j][n] = hash3[k][n] = 1;
                }
            }
        }
        return true;
    }
};