// 1563. Stone Game V
class Solution {
    private: 
    vector<vector<int>> f;
public:
    int dfs(const vector<int>& stonevalue, int left, int right){
        if(left == right){
            return 0;
        }
        if(f[left][right]){
            return f[left][right];
        }
        int sum = accumulate(stonevalue.begin() + left, stonevalue.begin() + right + 1, 0);

        int suml = 0;
        for (int i = left; i < right; ++i){
            suml += stonevalue[i];
            int sumr = sum - suml;
            if(suml < sumr){
                f[left][right] = max(f[left][right], dfs(stonevalue, left, i) + suml);
            }
            else if(suml > sumr){
                f[left][right] = max(f[left][right], dfs(stonevalue, i + 1, right) + sumr);
            }
            else{
                f[left][right] = max(f[left][right], max(dfs(stonevalue, left, i), dfs(stonevalue, i + 1, right)) + suml);
            }
        }
        return f[left][right];
    }
    int stoneGameV(vector<int>& stoneValue) {
        int n = stoneValue.size();
        f.assign(n, vector<int>(n));
        return dfs(stoneValue, 0, n - 1);
    }
};