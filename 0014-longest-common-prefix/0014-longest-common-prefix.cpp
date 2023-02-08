class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string f = strs[0];
        string l = strs[strs.size()-1];
        int i = 0;
        while(i < f.size()) {
            if(f[i] == l[i])
                i++;
            else
                break;
        }
        return f.substr(0, i);
    }
};