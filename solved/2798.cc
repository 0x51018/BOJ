#include <stdio.h>
int n, m, a[101], solve[101][101], ans;
int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%d", a+i);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            solve[i][j] = a[i] + a[j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(solve[i][j] > m) continue;
            for(int k = j + 1; k < n; k++){
                if(solve[i][j] + a[k] <= m) ans = solve[i][j] + a[k] > ans ? solve[i][j] + a[k] : ans;
            }
        }
    }
    printf("%d", ans);
}