#include <stdio.h>
int abc[26]; char str[100];
int main(){
    for(int i = 0; i < 26; i++) abc[i] = -1;
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) if(abc[str[i]-97] == -1) abc[str[i]-97] = i;
    for(int i = 0; i < 26; i++) printf("%d ", abc[i]);
}