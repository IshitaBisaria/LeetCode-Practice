class Solution {
public:
    double myPow(double x, int n) {
        int m = n;
        n = abs(n);
        if(n == 0 || x == 1)
            return 1;
        if(m == -1)
            return 1/x;
        if(m == 1)
            return x;
        double a = myPow(x, n/2);
        double ans = 0;
        if(n % 2 == 0)
            ans = a*a;
        else
            ans = x*a*a;
        if(m < 0)
            return 1/ans;
        return ans;
    }
};