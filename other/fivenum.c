#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=10000&&num<=99999){
        int a,b,c,d,e;
        a=num/10000%10;
        b=num/1000%10;
        c=num/100%10;
        d=num/10%10;
        e=num%10;
        printf("%d-%d-%d-%d-%d",a,b,c,d,e);
    }else{
        printf("请输入五位数！");
    }
    return 0;
}