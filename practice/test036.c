#include <stdio.h>

/* 程序36：求100之内的素数，并打印出来。
   分析：外层遍历 2~100，内层试除判断素数 */

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
    int i, count = 0;

    printf("100以内的素数: \n");
    for (i = 2; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%3d ", i);
            count++;
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    printf("\n共 %d 个\n", count);
    return 0;
}
