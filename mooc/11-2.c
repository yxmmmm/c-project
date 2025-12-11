#include<stdio.h>
int main(void){
    int found = 0;
    int num[10];
    int* p = num;
    int i;
    for(i = 0; i < 10; i++){
        scanf("%d", p+i);
    }

    int tm;
    scanf("%d", &tm);
    int temp;
    for(i = 0; i < 10; i++){
        if (tm == *(p+i)){
        temp = i;
        found = 1;
        }
    }
    if(found)
    printf("%d", temp+1);
    else
    printf("not found");
    return 0;
}