#include<stdio.h>
#include<string.h>
int index_str (char *s, char *t ){
    int len1 = strlen(s), len2 = strlen(t);
    for(int i = 0; i < len1; i++){
        for(int j = 0, k = i; j < len2; j++,k++){
            if(s[k] != t[j])
            break;
            if(j == len2-1)
            return i+1;
        }
    }
    return 0;
}
int main(void){
    char s[100], t[100];
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';
    fgets(t, 100, stdin);
    t[strcspn(t, "\n")] = '\0';
    int c = index_str(s, t);
    printf("%d", c);
}