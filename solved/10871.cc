#include <stdio.h>

int main(){
    int n, x, a;
    scanf("%d %d", &n, &x);
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        a < x ? printf("%d ", a): 0;
    }
}