// Diagonal Difference
int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int left = 0;
    int right = 0;
    for(int i = 0; i < n;i++){
            left += arr[i][i];
            right += arr[i][n-i-1];
        }
    
    return abs(left - right);
}