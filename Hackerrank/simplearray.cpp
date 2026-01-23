// simple array sum
int simpleArraySum(vector<int> ar) {
    int n = ar.size();
    int Sum = 0;
     for(int i = 0; i < n;i++){
         Sum = Sum + ar[i];
     } 
     return Sum;

}