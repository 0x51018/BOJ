#include <stdio.h>
int n, a[6], t, p, m;
int main(){
    scanf("%d", &n);
    for(int i = 0; i < 6; i++) scanf("%d", a+i);
    scanf("%d %d", &t, &p);
    for(int i = 0; i < 6; i++) m += (a[i] + t - 1) / t;
    printf("%d\n%d %d", m, n/p, n%p);
}