// 3551. Minimum Swaps to Sort by Digit Sum
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> digitsum(n);
        for(int i = 0; i < n ; i++){
            int x = nums[i], sum = 0;
            while(x > 0){
                sum += x % 10;
                x /= 10;
            }
            digitsum[i] = sum;
        }
        vector<int> indices(n);
        iota(indices.begin(), indices.end(), 0);
        sort(indices.begin(), indices.end(), [&](int a, int b){
            if(digitsum[a] != digitsum[b]){
                return digitsum[a] < digitsum[b];
            }
            return nums[a] < nums[b];
        });
        vector<int> targetpos(n);
        for(int pos = 0; pos < n; pos++){
            targetpos[indices[pos]] = pos;
        }
        vector<int> visited(n);
        int cyc = 0;
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                cyc++;
                int j = i;
                while(!visited[j]){
                    visited[j] = true;
                    j = targetpos[j];
                }
            }
        }
        return n - cyc;
    }
};