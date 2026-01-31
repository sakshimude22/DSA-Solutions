int birthdayCakeCandles(vector<int> candles) {
    int n = candles.size();
    int candles_count = 0;
    int mx;
    for(int i = 0; i <= n-1; i++){
         mx = max(mx, candles[i]);
    }
    for(int i = 0; i <= n-1; i++){
        if(candles[i] == mx){
            candles_count++;
        }
    }
    return candles_count;

}