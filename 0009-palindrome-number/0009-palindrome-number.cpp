class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int n = x;
        long long num = 0;
        while(n) {
            num = num*10 + n%10;
            n /= 10;
        }
        return num == x;
    }
};