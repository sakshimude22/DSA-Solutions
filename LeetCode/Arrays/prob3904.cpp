// 3904. Smallest Stable Index II
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> minval(n);
        minval[ n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; --i){
            minval[i] = min(minval[ i + 1], nums[i]);
        }
        int maxval = 0;
        for(int i = 0; i < n; ++i){
            maxval = max(maxval, nums[i]);
            if(maxval - minval[i] <= k){
                return i;
            }
        }
        return -1;
    }
};