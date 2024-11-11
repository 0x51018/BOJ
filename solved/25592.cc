#include <stdio.h>

int main(){
    int n, m = 0, sum = 0;
    scanf("%d", &n);
    while(sum <= n) sum += (++m);

    if(m % 2 == 1)printf("%d\n", sum - n);
    else printf("%d\n", sum == n ? m+1 : 0);
}