// 3550. Smallest Index With Digit Sum Equal to Index
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        auto getdigsum = [](int num){
            int sum = 0;

            while(num > 0){
                sum += num % 10;
                num /= 10;
            }
            return sum;
        };
        for(int i = 0; i < nums.size(); i++){
            if(getdigsum(nums[i]) == i){
                return i;
            }
        }
        return -1;
    }
};