// 1140. Stone Game II
class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int len = piles.size();
        vector<vector<int>> dp(len + 1, vector<int>(len + 1, 0));

        vector<int> suffixsum(len + 1, 0);
        for(int i = len - 1; i >= 0; i--){
            suffixsum[i] = suffixsum[i + 1] + piles[i];
        }
        for(int i = 0; i <= len; i++){
            dp[i][len] = suffixsum[i];
        }
        for(int idx = len - 1; idx >= 0; idx--){
            for(int maxtillnow = len - 1; maxtillnow >= 1; maxtillnow--){
                for(int x = 1; x <= 2 * maxtillnow && idx + x <= len; x++){
                    dp[idx][maxtillnow] = max(dp[idx][maxtillnow], suffixsum[idx] - dp[idx + x][max(maxtillnow, x)]);
                }
            }
        }
        return dp[0][1];
    }
};