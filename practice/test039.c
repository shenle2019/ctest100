#include <stdio.h>

/* 程序39：有一个已经排好序的数组。现输入一个数，要求按原来的规律
   将它插入数组中。
   分析：从后往前比较，比插入值大的元素依次后移一位 */

int main(void)
{
    int a[11] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};  /* 留一个空位 */
    int n = 10;          /* 当前元素个数 */
    int num, i;

    printf("原数组: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("请输入要插入的数: ");
    scanf("%d", &num);

    /* 找到插入位置：第一个比 num 大的元素位置 */
    i = n - 1;
    while (i >= 0 && a[i] > num) {
        a[i + 1] = a[i];   /* 元素后移 */
        i--;
    }
    a[i + 1] = num;        /* 空位放新数 */
    n++;

    printf("插入后: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
