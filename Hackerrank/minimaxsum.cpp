void miniMaxSum(vector<int> arr) {
    long long total = 0;
    int mn = INT_MAX;
    int mx = INT_MIN;
    
    for(int i = 0; i < arr.size(); i++){
        total += arr[i];
        mn = min(mn,arr[i]);
        mx = max(mx, arr[i]);
    }
    cout << total - mx << " " << total - mn;
    
   
}