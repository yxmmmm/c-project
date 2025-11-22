#include <stdio.h>
int main(){
    double a,b,c;
    char sign;
    printf("请输入符号：");
    scanf("%c",&sign);
    printf("输入两个数字：");
    scanf("%lf,%lf",&a,&b);
    switch(sign){
        case '+':c=a+b;break;
        case '-':c=a-b;break;
        case '*':c=a*b;break;
        case '/':if(b!=0){
        c=a/b;
        }else{
            printf("被除数不为0");
            return 1;}
            break;
        default :printf("输入正确符号");return 1;
    }
    printf("%.2lf",c);
    return 0;
}