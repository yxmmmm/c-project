#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d",&A,&B);
    C=A+B;
    if(C<=0){
        printf("答案小于0!");
        return 1;
    }else{
        printf("%d",C);
        return 0;
    }

}