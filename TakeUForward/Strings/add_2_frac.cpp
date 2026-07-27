// Add Two Fractions
class Solution {
public:
    int gcd(int a , int b){
        if(b == 0) return a;
        return gcd(b, a % b);
       }
       
    string addFractions(string frac1, string frac2) {
       // Your code goes here
       int num1, den1;
       sscanf(frac1.c_str(), "%d/%d", &num1, &den1);

       int num2, den2;
       sscanf(frac2.c_str(), "%d/%d", &num2, &den2);

       int lcm = den1 * den2 / gcd(den1, den2);

       int numerator = num1 * (lcm / den1) + num2 * (lcm / den2);

       int g = gcd(abs(numerator), lcm);
       numerator /= g;
       lcm /= g;

       return to_string(numerator) + "/" + to_string(lcm);

    }
};