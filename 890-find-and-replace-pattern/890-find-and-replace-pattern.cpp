class Solution {
public:
    vector<int> numericPattern(string str) {
        if(str.size() == 0)
            return {};
        vector<int> v;
        unordered_map<char, int> mp;
        int ind = 0;
        for(int i = 0; i < str.size(); i++) {
            if(mp.find(str[i]) == mp.end())
                mp.insert({str[i], ind++});
            v.push_back(mp[str[i]]);
        }
        return v;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        vector<int> v = numericPattern(pattern);
        int n = words.size();
        for(int i = 0; i < n; i++) {
            vector<int> currV = numericPattern(words[i]);
            if(v == currV)
                ans.push_back(words[i]);
        }
        return ans;
    }
};