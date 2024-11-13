#include <stdio.h>
int n, sum, max, arr[1001];
int main(){
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", arr+i);
        sum += arr[i], max = max > arr[i] ? max : arr[i];
    } 
    double avg = (double)sum / max *100 / n;
    printf("%f", avg);
}