#include<stdio.h>
#include<math.h>
int main(){
    double Xa,Ya,Xb,Yb,d;
    scanf("%lf %lf\n%lf %lf",&Xa,&Ya,&Xb,&Yb);
    d=sqrt((Xa-Xb)*(Xa-Xb)+(Ya-Yb)*(Ya-Yb));
    printf("%.3lf",d);
    return 0;
}