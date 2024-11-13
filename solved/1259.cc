#include <stdio.h>

int palindrome(int n){
    int ans = 0;
    while(n > 0){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}

int main(){
    int n = 1;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        if(n == palindrome(n)) printf("yes\n");
        else printf("no\n");
    }
}