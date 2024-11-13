#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd (ll a, ll b) {
    if(a < b) swap(a, b);
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll im_feeling_lucky (ll n) {
	ll cnt = 0;
	while (n > 1) {
		cout << "cnt : " << (++cnt) << '\n';
		ll r = rand() * rand() % (n - 1) + 2; // 2 ~ n-1 범위에서 랜덤 수 뽑기
		if (gcd(n, r) > 1) return gcd(n, r);
	}
}

int main() {
	ll n; cin >> n;
    vector<ll> primes;
	cout << im_feeling_lucky(n) << '\n';
    return 0;
}