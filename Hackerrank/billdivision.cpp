void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for(int i = 0; i<bill.size();i++){
        if(i != k){
            sum = sum + bill[i];
        }
    }
    int share = sum/2;
    if(share == b){
        cout << "Bon Appetit";
    }
    else {
    cout << b - share;
    }
}