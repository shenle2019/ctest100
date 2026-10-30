#include <stdio.h>

/* 程序85：判断一个素数能被几个 9 整除。
   分析：这是道脑筋急转弯——素数除了 1 和自身没有别的因子，
   而 9 不是素数，所以任何素数都不可能被 9 整除。
   程序演示：循环尝试用 9 除，看能除几次 */

int is_prime(int n)
{
    int i;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int n, count = 0, temp;

    printf("请输入一个素数: ");
    scanf("%d", &n);

    if (!is_prime(n)) {
        printf("%d 不是素数\n", n);
        return 0;
    }

    /* 演示用 9 去除：素数的定义决定了结果 */
    temp = n;
    while (temp % 9 == 0) {
        count++;
        temp /= 9;
    }

    if (count == 0) {
        printf("%d 是素数，不能被 9 整除（素数只有 1 和自身两个因子）\n", n);
    } else {
        printf("%d 能被 %d 个 9 整除\n", n, count);
    }
    return 0;
}
