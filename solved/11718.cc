#include <stdio.h>

int main(void) {
    char arr[101];
    while(scanf("%[^\n]s",arr) != EOF) {
        printf("%s\n", arr);
        getchar();
    }
}