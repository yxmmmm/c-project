#include<stdio.h>
int main(){
    int a,b;
    scanf("%d\r%d",&a,&b);
    double c;
    c=(double)b/a*100;
    printf("%.3lf%%",c);
    return 0;
}