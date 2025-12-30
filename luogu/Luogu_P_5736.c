#include<stdio.h>
#include<string.h>
#include<math.h>

int isprime(int a){
    if(a <= 1)
    return 0;
    for(int i = 2; i <= sqrt(a); i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(void){
	int n;
    scanf("%d", &n);
    int a[n];
    int i = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        if(isprime(a[i]))
        printf("%d ", a[i]);
    }
    return 0;
}