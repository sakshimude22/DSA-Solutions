vector<int> breakingRecords(vector<int> scores) {
    int n = scores.size();
    int highest_score = scores[0];
    int lowest_score = scores[0];
    int count_max = 0;
    int count_min = 0;
    for(int i = 1; i < n; i++){
        if(scores[i] > highest_score){
            highest_score = scores[i];
            count_max++;
        }
        else if(scores[i] < lowest_score){
            lowest_score = scores[i];
            count_min++;
        }
        
    }
    return {count_max, count_min};
}