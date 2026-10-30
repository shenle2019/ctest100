#include <stdio.h>

/* 程序19：一个数如果恰好等于它的因子之和，这个数就称为"完数"。
   例如6=1+2+3，编程找出1000以内的所有完数 */

int main(void)
{
    int n, sum, i;

    printf("1000以内的完数: ");
    for (n = 2; n < 1000; n++) {
        sum = 0;
        /* 求 n 的所有因子之和（不含自身） */
        for (i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == n) {
            printf("%d ", n);
        }
    }
    printf("\n");
    return 0;
}
