class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> mp1;
        unordered_map<string, int> mp2;
        vector<string> arr;
        for(int i = 0; i < s.size(); i++) {
            string str = "";
            while(i < s.size() && s[i] != ' ') {
                str += s[i];
                i++;
            }
            arr.push_back(str);
        }
        if(pattern.size() != arr.size())
            return false;
        for(int i = 0; i < pattern.size(); i++) {
            if(mp1[pattern[i]] != mp2[arr[i]])
                return false;
            mp1[pattern[i]] = mp2[arr[i]] = i+1;
        }
        return true;
    }
};