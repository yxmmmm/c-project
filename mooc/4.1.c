#include<stdio.h>
int main(){
    float x,y;
    scanf("%f",&x);
    if(x>=20){
        y=x-3;
    }else{
        if(x>0&&x<20){
            y=x+3;
        }else{
            y=x*3;
        }
    }
    printf("%.1f\n",y);
    return 0;
}