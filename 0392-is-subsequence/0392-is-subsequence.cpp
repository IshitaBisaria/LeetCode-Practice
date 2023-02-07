class Solution {
public:
    bool isSubSeq(string s, string t, int m, int n) {
        if(m == 0)
            return true;
        if(n == 0)
            return false;
        if(s[m-1] == t[n-1])
            return isSubSeq(s, t, m-1, n-1);
        else
            return isSubSeq(s, t, m, n-1);
    }
    bool isSubsequence(string s, string t) {
        // if(s.size() == 0 || s == t)
        //     return true;
        // if(t.size() == 0)
        //     return false;
        // int j = 0;
        // for(int i = 0; i < t.size(); i++) {
        //     if(s[j] == t[i]) {
        //         j++;
        //     }
        //     if(j == s.size())
        //         return true;
        // }
        // return false;
        int m = s.size();
        int n = t.size();
        return isSubSeq(s, t, m, n);
    }
};