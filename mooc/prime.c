#include<stdio.h>
#include<math.h>
int prime(int x){
    for(int i = 2; i <= sqrt(x); i++){
        if(x%i == 0)
        return 1;
    }
    return 0;
}
int main(void){
    int n;
    scanf("%d",&n);
    if(prime(n))
    printf("no");
    else
    printf("yes");
}
