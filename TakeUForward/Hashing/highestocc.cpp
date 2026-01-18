class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int n = nums.size();

        int maxi = nums[0];
        for (int i = 1; i < n; i++) {
            maxi = max(maxi, nums[i]);
        }

        vector<int> hash(maxi + 1, 0);

        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }

        int maxcount = 0;
        int el = -1;

        for (int i = 0; i <= maxi; i++) {
            if (hash[i] > maxcount) {
                maxcount = hash[i];
                el = i;
            }
        }

        return el;
    }
};