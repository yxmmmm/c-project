#include <stdio.h>
int main(){
    int mon;
    scanf("%d",&mon);
    switch(mon){
        case 3:
        case 4:
        case 5:printf("春");break;
        case 6:
        case 7:
        case 8:printf("夏");break;
        case 9:
        case 10:
        case 11:printf("秋");break;
        case 12:
        case 1:
        case 2:printf("冬");break;
        default:printf("error");
    } 
    return 0;

}