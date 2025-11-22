#include<stdio.h>
int main(){
    double s,i,n,t,j;
    scanf("%lf",&n);
    s=0;
    for(i=1;i<=n;i++){
        t=1;
        for(j=1;j<=i;j++){
            t=t*j;
        }
        s+=t;
    }
    printf("%.0lf",s);
    return 0;
}