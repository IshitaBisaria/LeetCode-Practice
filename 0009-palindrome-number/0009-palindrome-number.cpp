class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int n = x;
        long long ans = 0;
        while(n) {
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return x == ans;
    }
};