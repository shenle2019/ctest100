#include <stdio.h>

/* 程序61：打印出杨辉三角形（要求打印出10行）。
   分析：第 n 行有 n 个数，两端为 1，
   中间每个数等于上一行相邻两数之和：
   a[i][j] = a[i-1][j-1] + a[i-1][j] */

int main(void)
{
    int n = 10;
    int a[10][10] = {0};
    int i, j;

    /* 生成杨辉三角 */
    for (i = 0; i < n; i++) {
        a[i][0] = 1;          /* 每行第一个数是 1 */
        a[i][i] = 1;          /* 每行最后一个数是 1 */
        for (j = 1; j < i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    /* 打印，居中 */
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf("   ");    /* 前导空格，让图形居中 */
        }
        for (j = 0; j <= i; j++) {
            printf("%5d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
