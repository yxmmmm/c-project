//冒泡
void sort ( int *a, int n ){
    int temp;
    for(int i = 1; i <= n-1; i++){
        for(int j = 0; j < n-i; j++){
            if(*(a+j) < *(a+j+1)){
            temp = *(a+j);
            *(a+j) = *(a+j+1);
            *(a+j+1) = temp; 
            }
        }
    }
}

//选择
#include <stdio.h>

void sort(int *a, int n) {
    int i, j, max_idx, temp;

    // 外层循环：依次确定第 0, 1, ..., n-2 个位置的元素
    for (i = 0; i < n - 1; i++) {
        
        // 1. 初始化：假设当前未排序部分的第一个元素(i)是最大的
        max_idx = i;

        // 2. 内层循环：从 i+1 开始向后找，看有没有比 a[max_idx] 更大的
        for (j = i + 1; j < n; j++) {
            // 降序排序：如果发现更大的数
            if (a[j] > a[max_idx]) {
                max_idx = j; // 关键：只记录下标，不急着交换
            }
        }

        // 3. 交换：如果找到的最大值不是当前位置 i 的元素，则交换
        if (max_idx != i) {
            temp = a[i];
            a[i] = a[max_idx];
            a[max_idx] = temp;
        }
    }
}

int main() {
    int a[100], i, n;

    // 输入数组元素个数
    scanf("%d", &n);

    // 输入数组具体数值
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // 调用排序函数
    sort(a, n);

    // 输出结果
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        // 格式控制：只有不是最后一个数字时，才打印空格
        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}