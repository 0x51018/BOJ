#include <stdio.h>
int chk[42], tmp, cnt;
int main(){
    for(int i = 0; i < 10; i++){
        scanf("%d", &tmp);
        chk[tmp%42] += 1;
    }
    for(int i = 0; i < 42; i++) cnt += chk[i] == 0 ? 0 : 1;
    printf("%d", cnt);
}