class Solution {
public:
    int mirrorDistance(int n) {
    int rev = 0;
    int m = n;
    while(n > 0)
        {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
        return abs(m -   rev);
    }
};
//TC = 0(logn) , space = 0(1);