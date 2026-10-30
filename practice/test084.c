#include <stdio.h>

/* 程序84：一个偶数总能表示为两个素数之和（哥德巴赫猜想）。
   分析：遍历 2 到 n/2，检查 i 和 n-i 是否同时为素数 */

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
    int n, i;

    printf("请输入一个大于2的偶数: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++) {
        if (is_prime(i) && is_prime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            break;
        }
    }
    return 0;
}
