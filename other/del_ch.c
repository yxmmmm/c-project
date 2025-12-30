#include<stdio.h>
#include<string.h>
void del_ch(char * s, char c){
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        if(s[i] == c){
            for(int j = i; j < len; j++){
                s[j] = s[j+1];
            }
            i--;
        }
    }
}

int main(void){
    char a[100];
    char target_char;
 
    fgets(a, 100, stdin);
    scanf(" %c", &target_char);
    del_ch(a, target_char);
    puts(a);

    return 0;
}