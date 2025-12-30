class Solution {
public:
    bool isArmstrong(int n) {
        int sum = 0;
        int count = log10(n)+1;
        int copy = n;
        while(n>0){
            int lastDigit = n % 10;
            sum = sum + pow(lastDigit,count);
            n = n/10;
        }
        if(copy == sum) return true;
        return false;

    }
};