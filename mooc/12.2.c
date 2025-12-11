#include<stdio.h>
#include<string.h>
int Palindrome(char *str){
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if(isupper(str[i]))
        str[i] += 32;
    }
    for(int i = 0; i < len; i++){
        if(str[i] != str[len-i-1])
        return 0;
    }
    return 1;
}

int main( )

{

      char str[100];

      fgets(str, 99, stdin);

      size_t len_in = strlen(str);
      if (len_in > 0 && str[len_in - 1] == '\n') {
        str[len_in - 1] = '\0'; // 将换行符替换为空终止符
        }
        
      if(Palindrome(str)==1)

            printf("%s is a Palindrome", str);

        else

            printf("%s is not a Palindrome", str);

      return 0;

}