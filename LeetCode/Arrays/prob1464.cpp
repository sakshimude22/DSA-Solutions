// 1464. Maximum Product of Two Elements in an Array
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ans = max(ans, (nums[i] - 1) * (nums[j] - 1));
            }
        }
        return ans;
    }
};

/*
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       int x = nums[nums.size() - 1];
       int y = nums[nums.size() - 2];
       return (x - 1) * (y - 1);
    }
}; */