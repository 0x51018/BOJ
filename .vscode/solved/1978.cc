#include <stdio.h>

int n, m, cnt, primes[1001];

int main(){
    for(int i = 2; i < 1001; i++) primes[i] = 1;
    for(int i = 2; i*i <= 1000; i++){
        if(primes[i] == 0) continue;
        for(int j = 2; i*j <= 1000; j++) primes[i*j] = 0;
    }
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &m), cnt += primes[m] == 1 ? 1 : 0;
    printf("%d", cnt);
}