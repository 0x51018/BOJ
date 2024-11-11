#include <stdio.h> 
int main(){float s=4;char p[2];scanf("%s", p);p[0]=='F'?s=0:(s-=(p[0]-'A'),p[1]=='+'?s+=0.3:0,p[1]=='-'?s-=0.3:0);printf("%.1f", s);}