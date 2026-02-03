int migratoryBirds(vector<int> arr) {
    int freq[6] = {0};
    
    for(int i = 0; i< arr.size();i++){
        freq[arr[i]]++;
    }
    int maxcount = 0;
    int birdtype = 0;
    
    for(int i = 0; i <=5; i++){
        if(freq[i] > maxcount){
            maxcount = freq[i];
            birdtype = i;
        }
    }
    return birdtype;
}