#include<stdio.h>
int main(){
    double r,d,c,s;
    scanf("%lf",&r);
    d=2*r;
    c=3.14159*d;
    s=r*r*3.14159;
    printf("%.4lf %.4lf %.4lf",d,c,s);
    return 0;
}