#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll fact(ll n){
    if(n == 0) return 1;
    return n * fact(n-1);
}

ll fact(ll n, ll m){
    if(n == m) return 1;
    return n * fact(n-1,m);
}

ll comb(ll n, ll r){
    if(2*r > n) return fact(n, r) / fact(n-r);
    else return fact(n, n-r) / fact(r);
}

int main(){
    ll n; cin >> n;
    if(n == 3) cout << 0 << endl;
    else cout << comb(n,4) << endl;
}