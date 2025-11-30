#include<stdio.h>
void fun(int a[5], int b[5]){
     int c[5];
     for(int i = 0; i <= 4; i++){
        c[i] = a[i]*a[i]+b[4-i]*b[4-i];
     }
     for(int j = 0; j <= 3; j++)
     printf("%d ", c[j]);
     printf("%d", c[4]);
}
int main(void){
    int a[5],b[5];
    for(int i = 0; i < 5; i++)
    scanf("%d",&a[i]);
    for(int j = 0; j < 5; j++)
    scanf("%d",&b[j]);
    fun(a, b);
}

