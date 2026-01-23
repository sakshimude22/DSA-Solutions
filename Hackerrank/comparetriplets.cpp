vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int scoreA = 0;
    int scoreB = 0;
    
    int n = min(a.size(),b.size());
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            scoreA++;
        }
        else if(a[i] < b[i]){
            scoreB++;
        }
    }
    return{scoreA, scoreB};
}