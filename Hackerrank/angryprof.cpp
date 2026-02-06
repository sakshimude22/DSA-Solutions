string angryProfessor(int k, vector<int> a) {
    int n = a.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= 0){
            count++;
        }
    }
    if(count >= k){
        return "NO";
    }
    else {
    return "YES";
    }
}
