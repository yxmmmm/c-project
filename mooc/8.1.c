#include<stdio.h>
#define N 100
#include<string.h>
#include<ctype.h>
int main(){
    char str[N];
    scanf("%s",&str);
    strlwr(str);
    int n=strlen(str),flag=0;
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-1-i]){
           flag=1;
           break;
        }
    }
    if(flag)
    printf("no");
    else
    printf("yes");
    return 0;
}
