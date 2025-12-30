#include<stdio.h>
int main(void){
	int N;
    scanf("%d", &N);
    int s[N][N];
    int i, j;
    if(N%2)
    for(i = 1; i < N; i++){
        s[N-1][0] = 1;
        if(i%2)
        for(j = 0; j < N-1; j++){
            s[i][j+1] = s[i][j]+1;
            if(i != N-1)
            s[i][0] = s[i-1][0];
        }
        else
        for(j = 1; j < N; j++){
            s[i][j-1] = s[i][j]+1;
            if(i != N-1)
            s[i][N-1] = s[i-1][N-1];
        }
    }
    else
    for(i = 0; i < N; i++){
        s[N-1][0] = 1;
        if(i%2 == 0)
        for(j = 0; j < N-1; j++){
            s[i][j+1] = s[i][j]+1;
            if(i != N-1)
            s[i][0] = s[i-1][0];
        }
        else
        for(j = 1; j < N; j++){
            s[i][j-1] = s[i][j]+1;
            if(i != N-1)
            s[i][N-1] = s[i-1][N-1];
        }
    }
    
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%d ", s[i][j]);
            if(j == N-1)
            printf("\n");
        }
    }
}


//修正
#include <stdio.h>

int main(void){
    int N;
    // 1. 获取输入
    if(scanf("%d", &N) != 1) return 1;

    // 2. 定义数组
    int s[N][N];
    int i, j;
    int count = 1; // 计数器，从1开始，每填一个数这就+1

    // 3. 填充矩阵
    for(i = 0; i < N; i++){
        // 如果是偶数行 (0, 2, 4...)：从左往右填
        if(i % 2 == 0){
            for(j = 0; j < N; j++){
                s[i][j] = count;
                count++;
            }
        }
        // 如果是奇数行 (1, 3, 5...)：从右往左填
        else {
            for(j = N - 1; j >= 0; j--){
                s[i][j] = count;
                count++;
            }
        }
    }
    
    // 4. 输出矩阵
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%d ", s[i][j]);
            if(j == N-1)
                printf("\n");
        }
    }
    return 0;
}