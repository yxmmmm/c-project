#include<stdio.h>
#include<math.h>
int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    int need[n], p[n], q[n], w[n], realneed[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &p[i], &q[i], &w[i]);
    }  
    int sum = 0;
    for(int j = 0; j < n; j++){
        need[j] = (int)ceil(m*p[j]/q[j]);
        if(need[j] > w[j])
        realneed[j] = need[j]-w[j];
        else
        realneed[j] = 0;
        sum += realneed[j];
    }  
    printf("%d", sum+1);
}

