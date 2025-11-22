#include <stdio.h>

int main() {
    char uppercase;
    printf("请输入一个大写字母: ");
    scanf("%c", &uppercase);
    if (uppercase >= 'A' && uppercase <= 'Z') {
        char lowercase = uppercase + 32;
        
        printf("大写字母 %c 对应的小写字母是: %c\n", uppercase, lowercase);
    } else {
        printf("错误：请输入有效的大写字母 (A-Z)\n");
    }
    
    return 0;
}