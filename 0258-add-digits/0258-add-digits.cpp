class Solution {
public:
    int addDigits(int num) {
        if(num == 0)
            return 0;
        int ans = 0;
        while(num) {
            int d = (num % 10);
            ans += d;
            num /= 10;
            if(num == 0) {
                if(ans / 10 == 0)
                    return ans;
                num = ans;
                ans = 0;
            }
        }
        return ans;
    }
};