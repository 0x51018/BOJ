#include <stdio.h>
#include <math.h>

int main(){
    int n; scanf("%d", &n);
    printf("%d\n", (int)ceil((-3+sqrt(1+8*((n+4)/6)))/2)+2);
}

// 1 -> 1
// 2 -> 1 + 1 to 6
// 3 -> 1 + 6 + 1 to 12
// 4 -> 1 + 6 + 12 + 1 to 18
// 5 -> 1 + 6 + 12 + 18 + 1 to 24

// K = (N+4)/6
// (N : K)
// 1 : 0
// 2 to 7 : 1
// 8 to 19 : 2, 3
// 20 to 37 : 4, 5, 6 
// 38 to 61 : 7, 8, 9, 10

// (K : S)
// 0 : 1
// 1 : 2
// 2 to 3 : 3
// 4 to 6 : 4
// 7 to 10 : 5

// 구하고 싶은 S에 대해 P = S-2에 다음이 성립 
// P(P+1)/2 < K <= (P+1)(P+2)/2
// P(P+1) < 2K <= (P+1)(P+2) 

// 근의 공식 써서 해결