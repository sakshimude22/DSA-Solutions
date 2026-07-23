// 3513. Number of Unique XOR Triplets I
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2) return n;

        int mask = 0;
        for(int num : nums){
            mask |= num;
        }
        return mask + 1;
    }
};