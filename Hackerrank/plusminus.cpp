void plusMinus(vector<int> arr) {
    int n = arr.size();
    int count_pos = 0;
    int count_neg = 0;
    int count_zero = 0;
    
    for(int i = 0; i<n; i++){
        if(arr[i] > 0){
            count_pos++;
        }
        else if (arr[i] < 0) {
            count_neg++;
        }
        else {
        count_zero++;
        }
    }
    cout << (float)count_pos/n << endl;
    cout << (float)count_neg/n << endl;
    cout << (float)count_zero/n << endl;

}