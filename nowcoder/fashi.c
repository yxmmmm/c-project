#include <stdio.h>
#include <string.h>

#define MAXN 100005

int solved[MAXN];        // 标记题目是否已AC
int penalty_count[MAXN]; // 记录AC前的错误提交次数

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int ac_count = 0, total_penalty = 0;
    
    for (int i = 0; i < m; i++) {
        int k;
        char s[5];
        scanf("%d %s", &k, s);
        
        // k 就是题号，直接作为数组索引
        if (solved[k]) {
            // 这道题已经AC了，忽略后续提交
            continue;
        }
        
        if (strcmp(s, "AC") == 0) {
            // 第一次AC这道题
            solved[k] = 1;           // 标记为已AC
            ac_count++;              // AC题目数+1
            total_penalty += penalty_count[k]; // 累加这道题的罚时
        } else {
            // 非AC状态，且这道题还没AC
            penalty_count[k]++;      // 错误提交次数+1
        }
    }
    
    printf("%d %d\n", ac_count, total_penalty);
    
    return 0;
}
