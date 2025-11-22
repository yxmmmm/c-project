#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    b=(a/100)%10;
    c=(a/10)%10;
    d=a%10;
    printf("%d%d%d\n",d,c,b);
    return 0;
}