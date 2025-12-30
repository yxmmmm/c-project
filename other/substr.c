#include<stdio.h>
#include<string.h>
void sub_str (char *s, char *sub, int pos, int len ){
        for(int j = 0,i = pos-1; i < pos+len-1; j++,i++){
            sub[j] = s[i];
        }
        sub[len] = '\0';
    }

int main(void){
    char s[100], sub[100];
    fgets(s, 100, stdin);
    int l = strlen(s);
    s[l-1] = '\0';
    int pos,len;
    scanf("%d", &pos);
    scanf(" %d", &len);
    sub_str(s, sub, pos, len);
    puts(sub);
    return 0;
}