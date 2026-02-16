#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Student{
    public:
    int age;
    string name;
    string last_name;
    int std;
    
     void input() {
        cin >> age >> name >> last_name >> std;
    }
    
    void display(){
        cout << age << endl;
        cout << last_name << ", " << name << endl;
        cout << std << endl << endl;
        cout << age <<","<<name<<","<<last_name<<","<<std;
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Student s1;
    s1.input();
    s1.display();
    
    return 0;
}
