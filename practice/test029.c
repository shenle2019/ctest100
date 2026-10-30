#include <stdio.h>

/* 程序29：给一个不多于5位的正整数，要求：
   一、求它是几位数；二、逆序打印出各位数字。
   分析：对10取余得个位，整除10去掉个位 */

int main(void)
{
    int n, digits = 0;
    int reversed = 0;

    printf("请输入一个不多于5位的正整数: ");
    scanf("%d", &n);

    int temp = n;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;  /* 逐位取出来拼成逆序数 */
        temp /= 10;
        digits++;                              /* 每处理一位，位数加1 */
    }

    printf("%d 是 %d 位数\n", n, digits);
    printf("逆序打印: %d\n", reversed);
    return 0;
}
