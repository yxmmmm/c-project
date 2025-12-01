#include<stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int x[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }

    int minus = x[1]-x[0];
    if(n == 1)
    minus = 0;
    else
    for(int j = 0; j < n-1; j++){
        if(minus > x[j+1]-x[j])
        minus = x[j+1]-x[j];
    }

    int k[n];

    for(int i = 0; i < n; i++){
        printf("%d", k[i]);
    }
}

