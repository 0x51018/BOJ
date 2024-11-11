#include <stdio.h>
#include <string.h>

int main(){
    int n, incr = 0;
    char name[13], past[13];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", name);
        if(i != 0){
            if(strcmp(name, past) < 0) incr += -1;
            else incr += 1;
        }
        strcpy(past, name);
    }
    if(incr == n-1) printf("INCREASING\n");
    else if(incr == 1-n) printf("DECREASING\n");
    else printf("NEITHER\n");
}