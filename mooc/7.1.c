#include<stdio.h>
int main(){
    int num[5],i,min,j;
    for(i=0;i<=4;i++)
    scanf("%d",&num[i]);
    min=num[0];
    for(j=1;j<=4;j++)
    if(min>num[j])
    min=num[j];
    printf("%d",min);
    return 0;

}
