#include<stdio.h>
#include<string.h>
void stringcat(char str1[], char str2[], char str3[]){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for(int i = 0; i < len1; i++){
        str3[i] = str1[i];
    }
    for(int j = 0; j < len2; j++){
        str3[j+len1] = str2[j];
    }
    str3[len1+len2] = '\0';
}
int main(void){
    char str1[256], str2[256], str3[512];
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    stringcat(str1, str2, str3);
    puts(str3);
}

