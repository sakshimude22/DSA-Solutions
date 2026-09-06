// 115. Distinct Subsequences
class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.length(), n = t.length();
        if(m < n){
            return 0;
        }
        vector<unsigned long long> dp( n + 1);
        dp[n] = 1;
        for(int i = m - 1; i >= 0; i--){
            char schar = s.at(i);
            for(int j = 0; j < n; j++){
                char tchar = t.at(j);
                if(schar == tchar){
                    dp[j] = dp[j + 1] + dp[j];
                }
            }
        }
        return dp[0];
    }
};