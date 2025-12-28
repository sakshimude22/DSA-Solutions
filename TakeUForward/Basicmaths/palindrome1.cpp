class Solution {
public:
long long reverseNumber(int n) {
        long long revNum = 0;
        while(n > 0) {
            int lastDigit = n % 10;
            revNum = (revNum * 10) + lastDigit;
            n = n / 10;
        }
        return revNum;
    }
    bool isPalindrome(int n) {
        if (n<0) return false;
        long long revNum;
        revNum = reverseNumber(n);
        return (n == revNum);
    }
};