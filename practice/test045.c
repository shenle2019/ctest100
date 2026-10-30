#include <stdio.h>

/* 程序45：学习使用 register 定义变量的方法。
   分析：register 建议编译器把变量放进寄存器加速，
   现代编译器会自动优化，声明仅供参考，寄存器变量不能取地址 */

int main(void)
{
    register int i;      /* 循环变量放寄存器，加速访问 */
    int sum = 0;

    for (i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("1+2+...+100 = %d\n", sum);
    return 0;
}
