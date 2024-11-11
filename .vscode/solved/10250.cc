#include <stdio.h>
int t,h,w,n;
int main(){
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d %d", &h, &w, &n);
        printf("%d\n", ((n-1) % h+1)*100+(n+h-1)/h);
    }
}