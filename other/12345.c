#include<stdio.h>
int main()
{
    int num;
    printf("输入一个五位整数：");   
    scanf("%d",&num);
    int a,b,c,d,e;
    a=num/10000;
    b=(num/1000)%10;
    c=(num/100)%10;
    d=(num/10)%10;
    e=num%10;
    printf("%d-%d-%d-%d-%d",a,b,c,d,e);
    return 0;
}