#include<stdio.h>
void sort(int *a, int n){
    int temp;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] < a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
    }
}

int main(void){
    int a[5] = {11,22,33,44,55};
    sort(a, 5);
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    return 0;
}