#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public:
    int scores[5];
    void input(){
        for(int i = 0; i < 5; i++){
            cin >> scores[i];
        }
    }
    int calculateTotalScore(){
        int total =0;
        for(int i = 0; i <5; i++){
            total += scores[i];
        }
        return total;
    }
     
};

int main(){
    int n ;
    cin >> n;
    
    Student s;
    s.input();
    int s_score = s.calculateTotalScore();
    

    int count = 0;

    for (int i = 1; i < n; i++) {
        Student s;
        s.input();
        if (s.calculateTotalScore() > s_score) {
            count++;
        }
    }

    cout << count;
}


