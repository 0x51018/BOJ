#include <stdio.h>

int main(){
    int n, max = -2147483648, min = 2147483647, tmp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        max = max < tmp ? tmp : max, min = min > tmp ? tmp : min;
    }
    printf("%d %d", min, max);
}