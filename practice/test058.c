#include <stdio.h>

/* 程序58：在控制台输出一个矩形边框。
   原题画矩形为 TC 图形库，此处改为字符画实现。
   分析：双重循环，边框位置（第一行、最后一行、第一列、最后一列）
   输出 *，中间输出空格 */

int main(void)
{
    int rows = 8, cols = 20;
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
