#include<stdio.h>
int main(){
    int income;
    float tax;
    scanf("%d",&income);
    switch ((int)income/1000)
    {
    case 0:
    case 1:
    case 2:tax=0;break;
    case 3:
    case 4:tax=(income-2999)*0.03;break;
    case 5:
    case 6:
    case 7:tax=(income-4999)*0.1+(4999-2999)*0.03;break;
    default:tax=(income-7999)*0.15+(4999-2999)*0.03+(7999-4999)*0.1;break; 
    }
    printf("%.2f\n",tax);
    return 0;
}