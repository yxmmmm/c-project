#include<string.h>
int stringcompare(char s1[], char s2[]){
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    //无需条件len1 = len2，因为前缀相同是充分条件
    for (int i = 0; s1[i] != '\0'&&s2[i] != '\0'; i++){
        if(s1[i] > s2[i])
        return 1;
        if(s1[i] < s2[i])
        return -1;
    }
    if(len1 > len2)
    return 1;
    if(len2 >len1)
    return -1;
    return 0;
}