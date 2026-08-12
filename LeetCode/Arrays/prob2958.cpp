// 2958. Length of Longest Subarray With at Most K Frequency
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int start = -1;
        unordered_map<int, int> freq;

        for(int end = 0; end < nums.size(); end++){
            freq[nums[end]]++;
            while(freq[nums[end]] > k){
                start++;
                freq[nums[start]]--;
            }
            ans = max(ans, end - start);
        }
        return ans;
    }
};