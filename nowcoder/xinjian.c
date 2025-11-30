#include<stdio.h>
#include<math.h>
long long f(int n){
    long long x = ((pow(2, n)+1)*pow(3, n));
    return x;
}
long long g(int m){
    int j;
    if(m == 1)
    j = f(1);
    if(m > 1)
    j = f(m)*g(m-1);
    return j;
}
int main(void){
    int T, d[T];
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    scanf("%d", &d[i]);
    int t, strlen, temp;
    for(int p = 0; p < T; p++){
        temp = g(p);
        while (temp > 0) {
            strlen++;
            temp /= 10;
        }
        t = g(p) % (int)pow(10, strlen);
        printf("%d", t);
    }
}

