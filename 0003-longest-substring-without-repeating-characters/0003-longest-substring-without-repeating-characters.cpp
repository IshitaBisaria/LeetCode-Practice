class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_map<char, int> mp;
        int i = -1, j = -1;
        while(true) {
            bool f1 = false, f2 = false;
            // acquire
            while(true) {
                if(i == s.size()-1)
                    break;
                f1 = true;
                i++;
                mp[s[i]]++;
                if(mp[s[i]] == 2) {
                    break;
                } else {
                    ans = max(ans, i-j);
                }
            }
            // release
            while(j < i) {
                f2 = true;
                j++;
                mp[s[j]]--;
                if(mp[s[j]] == 1)
                    break;
            }
            if(!f1 && !f2)
                break;
        }
        return ans;
    }
};