class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> in(n+2, 0);
        for(int i = 0; i < edges.size(); i++) {
            in[edges[i][0]]++;
            in[edges[i][1]]++;
        }
        for(int i = 0; i < in.size(); i++) {
            if(in[i] == n)
                return i;
        }
        return -1;
    }
};