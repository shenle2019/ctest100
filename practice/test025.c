#include <stdio.h>

/* 程序25：求1+2!+3!+...+20!的和
   分析：此程序把累加变成了累乘，用 long long 防溢出 */

int main(void)
{
    long long fact = 1;     /* 当前阶乘值 */
    long long sum = 0;      /* 累加和 */
    int i;

    for (i = 1; i <= 20; i++) {
        fact *= i;          /* 累乘得到 i! */
        sum += fact;        /* 累加到总和 */
    }

    printf("1+2!+3!+...+20! = %lld\n", sum);
    return 0;
}
