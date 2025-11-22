#include<stdio.h>
int main(){
    int i,j;
    int a[5];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for(i=1;i<=5;i++){//n-1组
        for(j=0;j<5-i;j++){//第i轮中n-i次
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
    return 0;
}
    
