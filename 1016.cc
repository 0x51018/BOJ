#include <stdio.h>
#include <math.h>

long min, max, cnt;
int nosquare[1000001] = {0};

int main(){
    scanf("%ld %ld", &min, &max);
    long limit = (long)sqrt(max);
    for(long i = 2; i <= limit; i++) {
        long square = i * i, start = ((min + square - 1) / square) * square;
        for(long j = start; j <= max; j += square) nosquare[j - min] = 1;
    }
    for(long i = 0; i <= max - min; i++) if(nosquare[i] == 0) cnt++;
    printf("%ld\n", cnt);
    return 0;
}