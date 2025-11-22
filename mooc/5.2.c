#include<stdio.h>
#include<math.h>
int main(){
    int i,num1,num2,count=0,j,sign;
    scanf("%d,%d",&num1,&num2);
    sign=1;
    for(i=num1;i<=num2;i++){
        sign=1;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                sign=0;
                break;
            }
        }
    if(sign)
    count++;
    }
    printf("count=%d",count);
}
