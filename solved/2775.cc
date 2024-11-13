#include <bits/stdc++.h>
using namespace std;

int t, k, n, apt[15][15] = {0, };

int solve(int k, int n){
    if(apt[k][n] != 0) return apt[k][n];
    if(k == 0) apt[k][n] = n;
    else if(n == 1) apt[k][n] = 1;
    else apt[k][n] = solve(k, n-1) + solve(k-1, n);
    return apt[k][n];
}

int main(){
    cin >> t;
    while(t--){
        cin >> k >> n;
        cout << solve(k, n) << '\n';
    }
}