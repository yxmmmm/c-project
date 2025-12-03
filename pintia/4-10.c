#include<stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    int lft = 1;
    for(int i = 1; i < N; i++){
        lft = 2*(lft+1);
    }
    printf("%d", lft);
}

