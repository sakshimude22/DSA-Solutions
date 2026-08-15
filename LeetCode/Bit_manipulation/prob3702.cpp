// 3702. Longest Subsequence With Non-Zero Bitwise XOR
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        auto tot = 0;
        auto nonzero = 0;

        for(auto& n : nums){
            nonzero |= n > 0;
            tot ^= n;
        }
        return nonzero * (nums.size() - !tot);
    }
};

// class Solution {
// public:
//     int longestSubsequence(vector<int>& nums) {
//         int n = nums.size();
//         int totalxor = 0;
//         bool allzero = true;

//         for(int x: nums){
//             totalxor ^= x;
//             if(x > 0){
//                 allzero = false;
//             }        
//             }
//             if(totalxor > 0){
//                 return n;
//             }
//             return allzero ? 0: n - 1;
//     }
// };