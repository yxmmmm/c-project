#include<stdio.h>
#include<string.h>
int main(){
    char str[10000],ch;
    int i;
    scanf("%c",&ch);
    getchar();
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    for(i=0;i<n;i++){
        if(str[i]!=ch)
        putchar(str[i]);
    }
    return 0;
}
