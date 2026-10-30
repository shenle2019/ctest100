#include <stdio.h>
#include <math.h>

/* 程序33：判断一个数字是否为质数（素数）。
   素数：只能被1和自身整除的数，试除 2 到 sqrt(n) */

int main(void)
{
    int n, i;
    int is_prime = 1;    /* 先假设是素数 */

    printf("请输入一个整数: ");
    scanf("%d", &n);

    if (n < 2) {
        is_prime = 0;
    }
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            is_prime = 0;    /* 被整除，推翻假设 */
            break;
        }
    }

    if (is_prime) {
        printf("%d 是素数\n", n);
    } else {
        printf("%d 不是素数\n", n);
    }
    return 0;
}
