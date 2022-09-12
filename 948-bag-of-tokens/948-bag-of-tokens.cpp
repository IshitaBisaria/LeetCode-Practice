class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans = 0;
        int score = 0;
        sort(tokens.begin(), tokens.end());
        int i = 0, j = tokens.size()-1;
        while(i <= j) {
            if(power >= tokens[i]) {
                score++;
                power -= tokens[i++];
                ans = max(ans, score);
            } else if(score >= 1) {
                power += tokens[j--];
                score--;
            } else {
                break;
            }
        }
        return ans;
    }
};