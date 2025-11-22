#include<stdio.h>
#include<math.h>
int main(){
    int h,r,k;
    double v;
    scanf("%d %d",&h,&r);
    v=3.14*r*r*h*0.0001;
    k=(int)floor(2.0/v);
    k++;
    printf("%d",k);

}