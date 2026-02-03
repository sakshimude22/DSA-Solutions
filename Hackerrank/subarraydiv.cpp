int birthday(vector<int> s, int d, int m) {
    int count = 0;
    int sum = 0;
   for(int i = 0; i < s.size();i++){
    sum += s[i];
    if(i >= m){
        sum -= s[i - m];
   }
   if( i >= m-1 && sum == d){
    count++;
   }
   } 
   return count;
   
}