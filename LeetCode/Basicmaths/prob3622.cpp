// 3622. Check Divisibility by Digit Sum and Product
class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int original = n;

        while(n > 0){
        int lastdig = n % 10;
        n /= 10;
       
        sum += lastdig;
        product *= lastdig;
        }
        return original % (sum + product) == 0;
    }
};