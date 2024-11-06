#include <stdio.h>
int a[8], i, c;
int main(){
    for(i = 0; i < 8; i++) scanf("%d", a+i);
    for(i = 0; i < 7; i++) c += a[i] < a[i+1] ? 1 : a[i] > a[i+1] ? -1 : 0;
    printf("%s", c == 7 ? "ascending" : c == -7 ? "descending" : "mixed");
}