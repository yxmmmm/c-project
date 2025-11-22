#include<stdio.h>
int main(){
    int i;
    double s,e;
    s=0;
    for(i=2;i<=21;i++){
       e=(double)i/(i-1);
       s+=e;
       

    }
    printf("%lf",s);
    
}