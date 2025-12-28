// count all digits in a number

class Solution {
public:
    int countDigit(int n) {
        if(n == 0){
            return 1;
        }
        int count = 0;
        while(n>0){
            n = n/10;
            count = count + 1;
        }
return count;
    }
};