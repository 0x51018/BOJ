#include <stdio.h>
char str[100]; int len;
int main(){
    scanf("%s", str);
    while(str[len] != '\0') len++;
    printf("%d", len);
}