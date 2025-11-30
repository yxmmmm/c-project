#include<stdio.h>
double gys(int n){
    double jc;
    if(n == 1)
    jc = 1;
    else
    jc = n*gys(n-1);
    return jc;
}
int main(void){
    int n;
    scanf("%d", &n);
    printf("%lf", gys(n));
    return 0;
}

