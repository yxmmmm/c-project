#include<stdio.h>
#include<math.h>
#include<string.h>
int isprime(int num){
    if(num <= 1)
    return 0;
    for(int i = 2; i <= sqrt(num); i++){
        if(num%i == 0)
        return 0;
    }
    return 1;
}
int main(void){
    char str[1000];
    fgets(str, 1000, stdin);

    int len = strlen(str);
    int numcount[26] = {0};
    char ch;
    for(int i = 0; i < len; i++){
        ch = str[i];
        numcount[ch-'a']++;
    }
    
    int maxn = -1, minn = 10000;
    for(int j = 0; j < 26; j++){
        if(numcount[j] == 0)
        continue;
        else{
            if(maxn < numcount[j])
            maxn = numcount[j];
            if(minn > numcount[j])
            minn = numcount[j];
        }
    }
    int minus = maxn-minn;
    if(isprime(minus))
    printf("Lucky Word\n%d", minus);
    else
    printf("No Answer\n0");
}

