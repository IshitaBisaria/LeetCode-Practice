class Solution {
public:
    bool isSubSeq(string s, string t, int n, int m) {
        if(n == 0)
            return true;
        if(m == 0)
            return false;
        if(s[n-1] == t[m-1])
            return isSubSeq(s, t, n-1, m-1);
        else
            return isSubSeq(s, t, n, m-1);
    }
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        return isSubSeq(s, t, n, m);
    }
};