#include <stdio.h>

int main(){
    int a, b, c, n = 1;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a+b-c);
    while(b >= n) n *= 10;
    printf("%d\n", a * n + b - c);
}