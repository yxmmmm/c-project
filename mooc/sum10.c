#include<stdio.h>
int main(){
    int sum=0,i,j;
    for(i=1;i<=10;i++){
        scanf("%d ",&j);
        sum+=j;
    }
    printf("sum=%d",sum);
return 0;
}