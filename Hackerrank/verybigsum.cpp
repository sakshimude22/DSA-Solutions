// very big sum 
long aVeryBigSum(vector<long> ar) {
    long n = ar.size();
    long sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + ar[i];
    }
    return sum;

}