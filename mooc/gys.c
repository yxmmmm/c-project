#include<stdio.h>
int gys(int m, int n){
    int min,temp;
    if(m<n)
    min=m;
    else
    min=n;
    for(int i=2;i<=min;i++){
       if(m%i==0&&n%i==0)
       temp=i;
    }
    return temp;
}
int main(void){
    int m,n;
    scanf("%d,%d",&m,&n);
    printf("%d",gys(m,n));
}
