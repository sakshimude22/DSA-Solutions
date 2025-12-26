class Solution {
public:
    int reverse(int x) {
        long long revNum = 0;
        long long n = x;   

        int sign = (n < 0) ? -1 : 1;
        n = llabs(n);   

        while(n > 0) {
            int lastDigit = n % 10;
            if (revNum > INT_MAX / 10) {
                return 0;  
            }

            revNum = (revNum * 10) + lastDigit;
            n = n / 10;
        }

        revNum *= sign;
        if (revNum < INT_MIN || revNum > INT_MAX) return 0;

        return (int)revNum;
    }
};
