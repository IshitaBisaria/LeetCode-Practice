class Solution {
public:
    string getHint(string secret, string guess) {
        int aCnt = 0;
        int bCnt = 0;
        vector<int> sVec(10, 0);
        vector<int> gVec(10, 0); 
        if (secret.size() != guess.size() || secret.empty()) { return "0A0B"; }
        for (int i = 0; i < secret.size(); ++i) {
            char c1 = secret[i]; char c2 = guess[i];
            if (c1 == c2) {
                ++aCnt; 
            } else {
                ++sVec[c1-'0'];
                ++gVec[c2-'0'];
            }
        }
        for (int i = 0; i < sVec.size(); ++i) {
            bCnt += min(sVec[i], gVec[i]);
        }
        return to_string(aCnt) + 'A' + to_string(bCnt) + 'B';
    }
};