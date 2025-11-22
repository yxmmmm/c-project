#include<stdio.h>
int main(){
    long long int N;
    scanf("%lld",&N);
    if(N>0)
    printf("positive");
    if(N==0)
    printf("zero");
    if(N<0)
    printf("negative");
    return 0;
}
