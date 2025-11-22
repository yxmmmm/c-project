#include<stdio.h>
int compute(int x){
    if(x < 0)
    x = -x;
    int count = 0,count1 = 0;
    int temp = x;
    while(temp>0){
        temp /= 10;
        count++;
    }
    for(int i = 1; i <= count; i++){
        int m = x%10;
        x /= 10;
        count1 += m;
    }
    return count1;
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("sum=%d",compute(n));
}
