#include <stdio.h>

int main(){
    int t, c; char arr[1001];
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%s", arr);
        c = 0;
        while(arr[c] != '\0' && c < 99) c++;
        printf("%c%c\n", arr[0], arr[c-1]);
    } 
}