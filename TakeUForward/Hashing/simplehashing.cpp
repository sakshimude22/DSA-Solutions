#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    // we can also write the precompute in
    // the declare part as well

    // this is the precompyte part using map and unordered map 
    // here mpp is the name like hash

    // using map
    // map<int, int> mpp;
    // mpp[arr[i]]++;

    //using unorderd_map
    // unorderd_map<int, int> mpp;
    // mpp[arr[i]]++;


    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    //precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q; //q for query
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }
    return 0;
    
    
}

// ordered and unorderd are used 
// because in map the values are stored 
// in sorted manner
// while in unorederd as the name suggests 
// the values will be as it is we have asked
