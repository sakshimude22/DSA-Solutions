#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n , q;
    cin >> n >> q;
    vector<vector<int>> arr(n);
    for(int i = 0; i < n; i++){
        int k;
        cin >> k ;
        for(int j = 0; j < k; j++){
            int x;
            cin >> x;
            arr[i].push_back(x);
        }
    }
    for(int i = 0; i < q; i++){
        int row, col;
        cin >> row >> col;
        cout << arr[row][col] << endl;
    }
    return 0;
}
