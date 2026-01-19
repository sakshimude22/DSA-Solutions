#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    if (n<=1)return n;
    int last = 1;
    int slast = 0;
    int current = 0;
    for(int i=2;i<=n;i++){
        current = last + slast;
        slast = last;
        last = current;
    }
    return current;

}
int main(){
   int n1;
   cin>>n1;
   fibo(n1);
   cout << fibo(n1);
    return 0;
}
     


