#include <stdio.h>
#include <math.h>

// 明确使用 int main(void)
int main(void) {
    float a, b, c, s, area;

    printf("请输入三角形的三条边长（用空格分隔）: ");
    scanf("%f %f %f", &a, &b, &c);

    // 增加有效性验证：检查边长是否为正，且能否构成三角形
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("错误：边长必须是正数。\n");
        return 1; // 返回非0值表示程序因错误退出[8](@ref)
    } else if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("三角形的面积为: %.2f\n", area); // 优化输出格式
    } else {
        printf("错误：输入的三条边长无法构成一个三角形。\n");
        return 1;
    }

    return 0;
}
