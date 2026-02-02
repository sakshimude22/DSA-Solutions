void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int applecount = 0;
    int orangecount = 0;
    
    for(int i = 0; i < apples.size(); i++){
        int dist = a + apples[i];
        if(dist >= s && dist <= t){
            applecount++;
        }
    }
    for(int i = 0; i < oranges.size(); i++){
        int dist = b + oranges[i];
        if(dist >= s && dist <= t){
            orangecount++;
        }
    }
    
    cout << applecount << endl << orangecount;
}
