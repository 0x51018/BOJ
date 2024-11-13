#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int factorial2(int n, int m) {
    if (n == m) return 1;
    return n * factorial2(n - 1, m);
}

int combination(int n, int m) {
    if(2*m > n) return factorial2(n, n-m) / factorial(m);
    return factorial2(n, m) / factorial(n-m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << combination(n, m) << endl;
    return 0;
}