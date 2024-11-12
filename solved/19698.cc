#include <stdio.h>

int main(){
    int n, w, h, l;
    scanf("%d %d %d %d", &n, &w, &h, &l);
    w /= l, h /= l;
    n = n < w*h ? n : w*h;
    printf("%d", n);
}