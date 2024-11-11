#include <stdio.h>
int a, b, c, t[10];
int main(){
    scanf("%d %d %d", &a, &b, &c);
    a *= b * c;
    for(int i = 0; a; i++, a /= 10) t[a%10]++;
    for(int i = 0; i < 10; i++) printf("%d\n", t[i]);
}