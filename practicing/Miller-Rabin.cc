#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll modular_pow(ll base, ll exp, ll mod){
    ll result = 1; base %= mod;
    while(exp > 0){
        if(exp%2==1) result = (result * base) % mod;
        base = (base * base) % mod, exp /= 2;
    }
    return result;
}

bool miller_rabin(ll n, ll d, ll a){
    ll x = modular_pow(a, d, n);
    if(x == 1 || x == n-1) return true;
    while(d != n-1){
        x = (x * x) % n, d *= 2;
        if(x == 1) return false;
        if(x == n-1) return true;
    }
    return false;

}

bool is_prime(ll n){
    if(n < 2) return false;
    if(n <= 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    ll d = n-1;
    while(d%2 == 0) d /= 2;
    for(ll a : {2,3,5,7,11,13,17,19,23,29,31,37}){
        if(n == a) return true;
        if(!miller_rabin(n,d,a)) return false;
    }
    return true;
}

int main(){
    ll n; cin >> n;
    is_prime(n) ? cout << "prime" : cout << "composite";
    return 0;
}