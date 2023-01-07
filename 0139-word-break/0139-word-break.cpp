class Solution {
public:
    unordered_map<string,int> dp;
    bool is_present(string s, vector<string> &wordDict) {
        for(auto ele:wordDict) {
            if(ele==s)
                return true;
        }
        return false;
    }
    int solve(string s, vector<string>& wordDict){
        if(s.length()==0) return 1;
        if(dp[s]!=0) return dp[s];
        for(int i=0;i<s.length();i++) {
            string ss=s.substr(0,i+1);
            if(is_present(ss,wordDict)) {
                if(solve(s.substr(i+1),wordDict)==1) 
                    return dp[s]=1;
            }
        }
        return dp[s]=-1;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int x=solve(s,wordDict);
        if(x==1) return true;
        else return false;
    }
};