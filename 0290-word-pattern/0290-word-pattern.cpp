class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> mp1;
        // for(int i = 0; i < pattern.size(); i++)
        //     mp1[pattern[i]]++;
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
        // for(int i = 0; i < arr.size(); i++)
        //     cout << arr[i] << " ";
        // for(int i = 0; i < arr.size(); i++)
        //     mp2[arr[i]]++;
        // string st1 = "", st2 = "";
        // for(auto x : mp1)
        //     st1 += to_string(x.second);
        // for(auto x : mp2)
        //     st2 += to_string(x.second);
        // cout << st1 << " " << st2 << endl;
        // return st1 == st2;
    }
};