#include <stdio.h>

/* 程序38：求一个3*3矩阵对角线元素之和。
   分析：主对角线元素下标 i==j，副对角线 i+j==2 */

int main(void)
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j;
    int sum = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j || i + j == 2) {   /* 主对角线或副对角线 */
                sum += a[i][j];
            }
        }
    }

    printf("对角线元素之和: %d\n", sum);   /* 1+5+9 + 3+5+7 = 25 */
    return 0;
}
