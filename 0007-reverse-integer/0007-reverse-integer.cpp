class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        int n = abs(x);
        while(n) {
            if(ans > INT_MAX / 10 || ans < INT_MIN / 10)
                return 0;
            ans =  ans * 10 + n % 10;
            n /= 10;
        }
        return x < 0 ? -ans : ans;
    }
};