#include <stdio.h>

int main(){
    int s;
    scanf("%d", &s);
    if(100 >= s && s >= 90) printf("A");
    else if(89 >= s && s >= 80) printf("B");
    else if(79 >= s && s >= 70) printf("C");
    else if(69 >= s && s >= 60) printf("D");
    else printf("F");
}