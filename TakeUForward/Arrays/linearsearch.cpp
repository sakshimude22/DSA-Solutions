class Solution {
public:
int linearSearch(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
            // Check if current element is target
            if (nums[i] == target) {
                // Return index
                return i;
            }
        }
        // If target not found
        return -1;
    }
};