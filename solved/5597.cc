#include <stdio.h>

int arr[31], tmp;

int main(){
    for(int i = 0; i < 28; i++){
        scanf("%d", &tmp);
        arr[tmp]++;
    }
    for(int i = 1; i <= 30; i++) if(arr[i] == 0) printf("%d\n", i);
}