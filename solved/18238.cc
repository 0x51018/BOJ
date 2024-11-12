#include <stdio.h>

int main(){
    int n = 0, sum = 0, path, chai;
    char str[100];
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++){
        path = i == 0 ? 65 : str[i-1];
        chai = (str[i] - path + 26) % 26;
        sum += chai < 13 ? chai : 26 - chai;
    }
    printf("%d", sum);
}