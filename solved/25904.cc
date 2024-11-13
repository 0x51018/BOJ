#include <stdio.h>
int n, x, t[201], s;
int main(){
    scanf("%d %d", &n, &x);
    for(int i=0; i<n; i++) scanf("%d", &t[i]);
    while(1){
        if(t[s] < x) break;
        s = (s+1)%n;
        x++;
    }
    printf("%d", s+1);
}