#include <bits/stdc++.h>
using namespace std;

int n, m, arr[10001];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> m, arr[m]++; 
    for (int i = 1; i < 10001; i++) for(int j = 0; j < arr[i]; j++) cout << i << '\n';
    return 0;
}