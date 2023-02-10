class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s;
        for(int i = 0; i < emails.size(); i++) {
            string str = "";
            int j = 0;
            while(j < emails[i].size() && emails[i][j] != '@') {
                if(emails[i][j] == '+')
                    break;
                if(emails[i][j] != '.')
                    str += emails[i][j];
                j++;
            }
            while(j < emails[i].size() && emails[i][j] != '@') {
                j++;
            }
            while(j < emails[i].size()) {
                str += emails[i][j];
                j++;
            }
            s.insert(str);
        }
        return s.size();
    }
};