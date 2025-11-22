#include<stdio.h>
main(){
    char ch;
    ch=getchar();
    int num=ch;
    putchar(ch);
    putchar('-');
    printf("%d\n",num);
    return 0;
}