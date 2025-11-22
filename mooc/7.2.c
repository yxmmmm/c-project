#include<stdio.h>
int main(){
    int num[6],i,j,k,t;
    for(i=0;i<=5;i++)
    scanf("%d",&num[i]);
    for(j=1;j<=5;j++){
        for(k=0;k<=5-j;k++){
            if(num[k]<num[k+1])
            {
                t=num[k];
                num[k]=num[k+1];
                num[k+1]=t;
            }
        }
    }
for(i=0;i<=5;i++)
printf("%d\n",num[i]);
return 0;

}
