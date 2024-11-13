#include <stdio.h>
#include <math.h>
#define M 1234567891
#define R 31
typedef long long ll;

int main(){
    ll n, a = 0, m = 1; scanf("%lld", &n);
    for(ll i=0; i<n; i++){
        char c; scanf(" %c", &c);
        if(i) m = (m * R) % M;
        a = (a + (c - 'a' + 1) * m) % M;
    }
    printf("%lld", a);
}