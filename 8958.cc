#include <stdio.h>
char str[81];
int tmp,row,n;
int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; tmp = 0, row = 0, i++){
        for(int k = 0; k < 81; k++) str[k] = 'X';
        scanf("%s", str);
        for(int j = 0; str[j] != '\0'; j++){
            row += str[j] == 'O' ? 1 : -row;
            tmp += row;
        }
        printf("%d\n", tmp);
    }
}