class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int mi = INT_MAX;
        for(int i = 0; i < prices.size(); i++) {
            mi = min(mi, prices[i]);
            int profit = prices[i] - mi;
            ans = max(ans, profit);
        }
        return ans;
    }
};