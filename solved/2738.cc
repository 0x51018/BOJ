#include <stdio.h>

int main(){
    int n, m, tmp, arr[100][100];
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &arr[i][j]);
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++){
        scanf("%d", &tmp);
        arr[i][j] += tmp;
    }
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) printf("%d%c", arr[i][j], (j == m-1 ? '\n' : ' '));
}