#include <stdio.h>

int main(){
    int a[5];
    for(int i = 0; i < 5; i++) scanf("%d", &a[i]);
    printf("%d", (a[0]*a[0] + a[1]*a[1] + a[2]*a[2] + a[3]*a[3] + a[4]*a[4]) % 10);
}