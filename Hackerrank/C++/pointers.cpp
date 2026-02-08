void increment(int &a, int &b){
    int temp = a;
    a = a + b;
    b = abs(temp - b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a, b;
    cin >> a >> b;
    increment(a, b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}
