#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    string s;
    getline(cin, s);
     
    stringstream ss(s);
    int x;
    char com;
    
    while(ss >> x){
        cout << x << endl;
        ss >> com;
    }
   
    return 0;
}
