class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        int mod = 1e9+7;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++)
            v.push_back({efficiency[i], speed[i]});
        sort(v.rbegin(), v.rend());
        priority_queue<int, vector<int>, greater<int>> pq;
        long sumS = 0;
        long ans = 0;
        for(auto x : v) {
            sumS += x.second;
            pq.push(x.second);
            if(pq.size() > k) {
                sumS -= pq.top();
                pq.pop();
            }
            ans = max(ans, sumS*x.first);
        }
        return ans%mod;
    }
};