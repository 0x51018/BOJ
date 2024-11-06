#include <stdio.h>

int main(){
    int h, m;
    scanf("%d %d", &h, &m);
    printf("%d %d", (h*60+m+1395)/60%24, (h*60+m+15)%60);
}