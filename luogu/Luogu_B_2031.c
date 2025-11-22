#include<stdio.h>
#include<math.h>
int main(){
    double p,a,b,c,S;
    double x1,x2,x3,y1,y2,y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2lf",S);
    return 0;
}
