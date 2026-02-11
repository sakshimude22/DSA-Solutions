#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int maxVal = a;

    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;
    if (d > maxVal) maxVal = d;

    return maxVal;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << max_of_four(a, b, c, d);
    return 0;
}
