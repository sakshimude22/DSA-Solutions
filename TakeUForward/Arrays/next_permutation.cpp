// Next Permutation
class Solution {
public:
    // Function to get the next permutation of given array
    void nextPermutation(vector<int>& nums) {
        // Get all the Permutations
        vector<vector<int>> ans = getAllPermutations(nums);
        
        int index = -1; // Current permutation index
        
        /* Perform a linear search to get the
        permutation of current permutation */
        for(int i = 0; i < ans.size(); i++) {
            if(nums == ans[i]) {
                index = i;
                break;
            }
        }
        
        // Store the next permutation in-place
        if(index == ans.size() - 1) nums = ans[0];
        else nums = ans[index + 1];
        
        return;
    }
    
private:
    /* Function to generate all permutations of 
    the given array in sorted order */
    vector<vector<int>> getAllPermutations(vector<int> &nums) {
        vector<vector<int>> ans; // To store the permutation
        
        // Recursive Helper function call 
        helperFunc(0, nums, ans);
        
        sort(ans.begin(), ans.end()); // Sort the permutations
        return ans; // Return the result
    }
    
    // Helper function to get all the permutations of the given array
    void helperFunc(int ind, vector<int> &nums, 
                        vector<vector<int>> & ans) {
        
        // Base case
        if(ind == nums.size()) {
            // Add the permutation to the answer
            ans.push_back(nums);
            return;
        }
        
        // Traverse the array
        for(int i = ind; i < nums.size(); i++) {
            swap(nums[ind], nums[i]); // Swap-In
            
            // Recursively call the helper function
            helperFunc(ind+1, nums, ans);
            
            swap(nums[ind], nums[i]); // Swap-Out
        }
        
        return;
    }
};
