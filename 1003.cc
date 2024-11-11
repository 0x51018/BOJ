#include <stdio.h>

int a[42] = {1, 0, 1, 1}, b[42] = {0, 1, 1, 2}, m = 2;

void calculate(int n){
    if(n > m) for(int i = m; i <= n; i++) a[i] = a[i - 1] + a[i - 2], b[i] = b[i - 1] + b[i - 2];
    m = m < n ? n : m;
}

int main(){
    int n, i;
    scanf("%d", &n);
    for(int k = 0; k < n; k++){
        scanf("%d", &i);
        calculate(i);
        printf("%d %d\n", a[i], b[(i)]);
    }
    return 0;
}