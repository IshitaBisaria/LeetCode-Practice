class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> counts(26, 0);
        int start = 0;
        int maxCharCount = 0;
        int n = s.length();
        int result = 0;
        for(int end = 0; end < n; end++){
            counts[s[end]-'A']++;
            if(maxCharCount < counts[s[end]-'A']){
                maxCharCount = counts[s[end]-'A'];
            }
            while(end-start-maxCharCount+1 > k){
                counts[s[start]-'A']--;
                start++;
                for(int i = 0; i < 26; i++){
                    if(maxCharCount < counts[i]){
                        maxCharCount = counts[i];
                    }
                }
            }
            result = max(result, end-start+1);
        }
        return result;
        // int ans = 0;
        // int i = -1, j = -1;
        // unordered_map<char, int> mp;
        // while(true) {
        //     bool f1 = false, f2 = false;
        //     while(true) {
        //         if(i == s.size()-1)
        //             break;
        //         i++;
        //         mp[s[i]]++;
        //         if(mp.size() == 2)
        //             break;
        //         else
        //             ans = max(ans, i-j);
        //     }
        // }
        // while(j < i) {
        //     j++;
        //     if(k > 0)
        //         k--;
        //     else {
        //         mp[s[j]]--;
        //         k++;
        //     }
        //     if(mp.size() == 1)
        //         break;
        // }
        // return ans;
    }
};