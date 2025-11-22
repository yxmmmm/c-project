#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch<=96&&ch>=65){
        ch=ch+32;
        printf("%c",ch);
    }else if(ch<=122&&ch>=97){
        ch=ch-32;
        printf("%c",ch);
    }else{
        printf("请输入字母");
    }
    return 0;
}