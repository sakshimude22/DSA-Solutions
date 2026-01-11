#include <bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout <<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j =1;j<=n-i+1;j++){
            cout <<"*";
        }
        cout<<endl;
    }
}


void pattern10(int n){
    pattern1(n);
    pattern2(n-1);
}

int main(){
    int n;
    cin>>n;
    pattern10(n);
}
    