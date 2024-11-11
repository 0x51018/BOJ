#include <stdio.h>

int main(){
    int n, a, b, num; 
    char arr[63];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 63; j++) arr[j] = '\0';
        num = -1, a = 0, b = 0;
        scanf("%s", arr);
        for(int j = 0; j < 63; j++){
            if(arr[j] == '\0') break;
            if(arr[j] == '!' && num == -1) a++;
            if(arr[j] != '!') num = arr[j] - '0';
            if(arr[j] == '!' && num != -1) b++;
        }
        if(b >= 1) num = 1;
        if(a % 2 == 1) num = 1 - num;
        printf("%d\n", num);
    }
}