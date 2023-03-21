class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int j = 0;
        for(int i = 0; i < spaces.size(); i++) {
            for(; j < s.size(); ) {
                if(j == spaces[i]) {
                    ans.push_back(' ');
                    spaces[i] = -1;
                    if(i != spaces.size()-1)
                        break;
                    // if(i != spaces.size()-1)
                    //     spaces[i+1]++;
                } else {
                    ans.push_back(s[j]);
                    j++;
                }
            }
        }
        return ans;
    }
};