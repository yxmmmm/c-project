#include<stdio.h>
#include<string.h>
int main(void){
	int n;
    while (scanf("%d", &n) != EOF) {
    int count = 0;
    for(int i = 1; i <= n; i++){
        count+=i;
    }
    printf("%d\n\n", count);
    }
}