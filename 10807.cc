#include <stdio.h>
int n, arr[100], f, cnt;
int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", arr+i);
    scanf("%d", &f);
    for(int i = 0; i < n; i++) if(arr[i] == f) cnt++;
    printf("%d\n", cnt);
}