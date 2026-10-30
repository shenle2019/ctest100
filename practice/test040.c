#include <stdio.h>

/* 程序40：将一个数组逆序输出。
   分析：原地逆序，首尾下标向中间走交换元素 */

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int i, tmp;

    printf("原数组: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    /* 首尾交换 */
    for (i = 0; i < n / 2; i++) {
        tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }

    printf("逆序后: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
