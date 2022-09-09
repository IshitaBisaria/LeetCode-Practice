class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end());
        int ans = 0;
        int a = properties[properties.size()-1][0];
        int b = properties[properties.size()-1][1];
        int lmax = properties[properties.size()-1][1];
        for(int i = properties.size()-2; i >= 0; i--) {
            if(properties[i][0] < properties[i+1][0]) {
                b = max(lmax, b);
                lmax = max(b, properties[i][1]);
            }
            if(properties[i][0] < a && properties[i][1] < b)
                ans++;
        }
        return ans;
    }
};