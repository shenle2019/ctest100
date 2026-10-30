#include <stdio.h>

/* 程序62：字符点阵画点。
   原题 putpixel 为 TC 图形库，此处改为字符点阵实现。
   分析：用一个二维字符数组当画布，把指定坐标置为 *，最后整体打印 */

int main(void)
{
    char canvas[10][20];
    int i, j;

    /* 初始化画布为空格 */
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 20; j++) {
            canvas[i][j] = ' ';
        }
    }

    /* 在指定位置画点：对角线上的点 */
    canvas[1][2] = '*';
    canvas[2][5] = '*';
    canvas[3][8] = '*';
    canvas[4][11] = '*';
    canvas[5][14] = '*';
    canvas[7][17] = '*';

    /* 整体打印画布 */
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 20; j++) {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }
    return 0;
}
