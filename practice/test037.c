#include <stdio.h>

/* 程序37：对10个数进行排序。
   分析：选择排序，每趟从剩余元素中挑最小的放到前面，共 n-1 趟 */

int main(void)
{
    int a[10] = {34, 7, 23, 32, 5, 62, 45, 12, 98, 11};
    int n = 10;
    int i, j, min_idx, tmp;

    printf("排序前: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        min_idx = i;                        /* 假设当前位最小 */
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;                /* 找到更小的 */
            }
        }
        if (min_idx != i) {                 /* 交换到前面 */
            tmp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = tmp;
        }
    }

    printf("排序后: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
