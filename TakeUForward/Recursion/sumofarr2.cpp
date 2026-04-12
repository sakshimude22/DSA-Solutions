// sum of array 2 
class Solution{	
	public:
    int arraySum(vector<int>& nums) {
        // Start from index 0
        return sum(nums, 0);
    }

private:
    int sum(vector<int>& nums, int left) {
        // Base case: out of bounds
        if (left >= nums.size()) {
            return 0;
        }
        // Add current element and recurse
        return nums[left] + sum(nums, left + 1);
    }
};