// 594. Longest Harmonious Subsequence
class Solution {
public:
    int findLHS(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int i = 0;
        int ans = 0;

        for(int j = 0; j < nums.size(); j++) {

            while(nums[j] - nums[i] > 1) {
                i++;
            }

            if(nums[j] - nums[i] == 1) {
                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};

/* class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int x : nums)
        mp[x]++;

        int ans = 0;
        for(auto &it : mp){
            int x = it.first;
            if(mp.count(x + 1)){
                ans = max(ans, mp[x] + mp[x + 1]);
            }
        }
        return ans;
    }
};
*/