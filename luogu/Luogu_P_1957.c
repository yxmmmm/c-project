#include<stdio.h>
#include<string.h>
int main(void){
    int count;
    scanf("%d", &count);
    getchar();//收换行
    char ch, exp[100], line[100];
    int m, n;

    char lastOp = 0;
    for(int i = 0; i < count; i++){
        fgets(line, sizeof(line), stdin);//输入计算数据
        
        char ch;
        // 检查第一个字符是不是字母（运算符）
        if(line[0] == 'a' || line[0] == 'b' || line[0] == 'c') {
            // 是三个数据
            sscanf(line, "%c %d %d", &lastOp, &m, &n);
        } else {
            // 是两个数据
            sscanf(line, "%d %d", &m, &n);
            // 使用上一题的运算符
        }


        //lastop作为🚩
        if(lastOp == 'a') {
            sprintf(exp, "%d+%d=%d", m, n, m+n);
            int len = strlen(exp);
            printf("%s\n%d\n", exp, len);
        }
        else if(lastOp == 'b') {
            sprintf(exp, "%d-%d=%d", m, n, m-n);
            int len = strlen(exp);
            printf("%s\n%d\n", exp, len);
        }
        else if(lastOp == 'c') {
            sprintf(exp, "%d*%d=%d", m, n, m*n);
            int len = strlen(exp);
            printf("%s\n%d\n", exp, len);
        }
    }
}

