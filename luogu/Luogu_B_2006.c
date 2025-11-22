#include<stdio.h>
int main(){
    int x,a,y,b;
    scanf("%d %d %d %d",&x,&a,&y,&b);
    double m;
    m=(double)(x*a-y*b)/(a-b);
    printf("%.2lf",m);
    return 0; 

}