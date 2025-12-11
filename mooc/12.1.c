#include<stdio.h>
int len(char *str){
    int count = 0;
    while(*str != '\0'){
        count++;
        str++;
    }
    return count;
}
int main( )

{

       char str[100];

       fgets(str, 99, stdin);

       printf("The length of this string is %d", len(str));

       return 0;

}