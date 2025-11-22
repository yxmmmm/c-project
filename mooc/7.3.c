#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int a[7]={2,4,6,8,10,12},i,j;
    for(i=0;i<=5;i++){
        if(num>=12)
        a[6]=num;
        else if(num<=2){
        a[i]=a[i+1];
        a[0]=num;}
        else{
            a[i+1]=a[i+2];
            a[i+1]=num;
        }
    }
    for(j=0;j<=6;j++){
        printf("%d ",a[j]);
    }
    return 0;


}
