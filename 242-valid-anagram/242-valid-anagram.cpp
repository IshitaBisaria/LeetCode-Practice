class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        int n = s.size();
        int count[26] = {0};
        for(int i = 0; i < n; i++) {
            count[s[i]-'0'-49]++;
            count[t[i]-'0'-49]--;
        }
        for(int i = 0; i < 26; i++) {
            if(count[i] != 0)
                return false;
        }
        return true;
    }
};