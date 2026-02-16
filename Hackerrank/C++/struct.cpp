#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct Student {
    int age;
    string name;
    string ln;
    int std;
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Student s;
     cin >> s.age >> s.name >> s.ln >> s.std;
     
     cout << s.age <<" "<< s.name <<" "<< s.ln <<" "<< s.std;
     
    return 0;
}
