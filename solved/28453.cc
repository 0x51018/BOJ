#include <stdio.h>

int main(){
    int n, l;
    scanf("%d", &n);
    for(int i =0 ; i < n; i++){
        scanf("%d", &l);
        if(l >= 300) printf("1 ");
        else if(l >= 275) printf("2 ");
        else if(l >= 250) printf("3 ");
        else printf("4 ");
    }
}