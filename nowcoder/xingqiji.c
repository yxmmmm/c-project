#include<stdio.h>
int main(void){
    int T;
    scanf("%d", &T);
    int x[T], y[T], z[T], w[T];
    for(int i = 0; i < T; i++)
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
    int t;
    for(int j = 0; j < T; j++){
        t = (x[j]+y[j])%7;
        w[j] = (t+z[j]-1)%7+1;
        printf("%d\n", w[j]);
    }
    return 0;
}

