#include <stdio.h>

/* 程序75：放松一下，算一道简单的题目。
   综合练习：输入两个整数求四则运算，考察 scanf 与 printf 的组合使用 */

int main(void)
{
    int a, b;

    printf("请输入两个整数: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("%d / %d = %d (整除)\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("除数为 0，无法计算\n");
    }
    return 0;
}
