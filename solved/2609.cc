#include <stdio.h>

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int a, b;

int main(){
    scanf("%d %d", &a, &b);
    printf("%d\n%d\n", gcd(a, b), a * b / gcd(a, b));
    return 0;
}