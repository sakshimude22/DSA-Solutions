#include <bits/stdc++.h>
using namespace std;

void pattern17(int n){
  for(int i =1;i<=n;i++){
    char ch = 'A';
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    
    if ( j < i ) {
        ch=ch+1;
    }
    else{
        ch=ch-1;
    }
    }
    for(int j=1;j<2*i-1;j++){
        cout<<ch;
    }
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
cout<<endl;
  }
}
int main(){
    int n;
    cin>>n;
    pattern17(n);
}