#include<stdio.h>
int main(void){
	int m,s,t;
    scanf("%d %d %d", &m, &t, &s);

    int n,remaining;
    if(t == 0)
    {
        printf("0");
        return 0;
    }
    else{
        if(s%t == 0){
            n = s/t;
        }
        else
        n = s/t + 1;
    }
    if(n > m)
    remaining = 0;
    else
    remaining  = m - n;
    printf("%d", remaining);
}