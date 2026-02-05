int hurdleRace(int k, vector<int> height) {
    int n = height.size();
    int largest = 0;
    for(int i = 0; i < n; i++){
        largest = max(largest, height[i]);
    }
    
    if (largest > k) {
        return largest - k;
    }
    return 0;
}