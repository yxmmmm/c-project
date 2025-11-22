#include<stdio.h>
int main(){
    int a,b,i,sign=1,min;
    scanf("%d,%d",&a,&b);
    if(a<b)
    min=a;
    else
    min=b;
    for(i=2;i<=min;i++){
       if(a%i==0&&b%i==0)
       sign=0;
       break;
    }
    if(sign)
    printf("YES");
    else
    printf("NO");
    return 0;
}