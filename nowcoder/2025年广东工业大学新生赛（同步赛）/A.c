#include<stdio.h>
int main(void){
    int num;
    scanf("%d", &num);
    int a[num];
    for (int i = 0; i < num; i++){
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    int l = 1, r = 1;
    for(int j = 0; j < num; j++){
        if(max < a[j]){
        max = a[j];
        l = j+1;
        }
        if(min > a[j]){
        min = a[j];
        r = j+1;
        }
    }
    int minus = max-min;
    if(l > r)
    printf("%d %d %d", r, l, minus);
    if(l < r)
    printf("%d %d %d", l, r, minus);
}

