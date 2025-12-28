class Solution {
public:
    int reverseNumber(int n) {
        if(n == 0) return n;
        int revNum = 0;
        while(n > 0){
            int lastDigit = n % 10;

            revNum = (revNum * 10) + lastDigit;
            n = n/10;
        }

return revNum;
    }
};