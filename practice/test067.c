#include <stdio.h>

/* 程序67：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，
   输出数组。
   分析：先找出最大值、最小值的位置，再分别与首、尾元素交换。
   注意处理最大值在末尾、最小值在开头等重叠情况 */

int main(void)
{
    int a[10] = {45, 12, 98, 34, 7, 23, 32, 5, 62, 11};
    int n = 10;
    int i, max_idx = 0, min_idx = 0, tmp;

    /* 找最大值和最小值的位置 */
    for (i = 1; i < n; i++) {
        if (a[i] > a[max_idx]) {
            max_idx = i;
        }
        if (a[i] < a[min_idx]) {
            min_idx = i;
        }
    }

    /* 最大的与第一个元素交换 */
    tmp = a[0];
    a[0] = a[max_idx];
    a[max_idx] = tmp;
    /* 若最小值恰好是第一个元素，它已被换走，修正 min_idx */
    if (min_idx == 0) {
        min_idx = max_idx;
    }

    /* 最小的与最后一个元素交换 */
    tmp = a[n - 1];
    a[n - 1] = a[min_idx];
    a[min_idx] = tmp;

    printf("交换后: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
