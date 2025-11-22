#include<stdio.h>
int main(){
    int a[5];
    int i,j;
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }//输入
    
    int temp;
    for(i=0;i<4;i++){//只需要进行n-1次
        for(j=i+1;j<5;j++){//from a[i+1] to a[4]
            if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;}
            
        }
    }
    for(i=0;i<5;i++)
    printf("%d",a[i]);
    return 0;
}