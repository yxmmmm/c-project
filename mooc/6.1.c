#include<stdio.h>
int main(){
    int yue, bei, m, n, k, temp;
    scanf("%d %d", &m, &n);
    
    int a = m, b = n;  // 保存原始值
    
    // 辗转相除法求最大公约数
    while(n != 0){
        k = m % n;  // 求余数
        m = n;      // 更新m
        n = k;      // 更新n
    }
    
    yue = m;        // 最大公约数
    bei = (a * b) / yue;  // 最小公倍数
    
    printf("%d %d", yue, bei);
    return 0;
}





