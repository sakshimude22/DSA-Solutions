// Maps-STL
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


// int main() {
//     int q, t;
//     string x;
    
//     cin >> q;
    
//     map <string, int>m;
//     while (q -- ){
//         cin >> t >> x ;
//         auto itr = m.find (x);
//         if (t == 1){
//             int k;
//             cin >> k;
//             m[x]+=k;
//         }else if (t == 2) m.erase(x);
//         else cout << (itr!=m.end()?itr -> second: 0) << "\n";
//     }   
//     return 0;
// }
int main() {
    int q, t;
    string x;
    
    cin >> q;
    map <string, int>m;
    while(q--){
        cin >> t >> x;
        auto itr = m.find(x);
        if(t == 1){
            int k;
            cin >> k;
            m[x] += k;
        }
        else if(t == 2) {
            m.erase(x);
        }
        else{
            cout<<(itr != m.end()?itr -> second : 0) << "\n";
        }
    }
    return 0;
}
