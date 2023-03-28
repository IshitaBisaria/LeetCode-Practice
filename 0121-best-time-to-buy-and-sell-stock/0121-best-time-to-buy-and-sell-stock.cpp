class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi = INT_MAX;
        int ans = INT_MIN;
        for(int i = 0; i < prices.size(); i++) {
            mi = min(mi, prices[i]);
            int profit = prices[i]-mi;
            ans = max(ans, profit);
        }
        return ans;
    }
};