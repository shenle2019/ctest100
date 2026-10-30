#include <stdio.h>

/* 程序57：在控制台输出一条直线图案。
   原题画线为 TC 图形库，此处改为字符画实现。
   分析：按直线方程 y = kx 遍历 x 坐标，
   计算 y 四舍五入后在该行输出 *。
   控制台行从上往下打印，屏幕行 row 对应数学坐标 y = height-1-row */

int main(void)
{
    int width = 30;          /* 画布宽度（列数） */
    int height = 10;         /* 画布高度（行数） */
    int x, row;
    double k = 9.0 / (width - 1);   /* 斜率：从左下角到右上角的对角线 */

    for (row = 0; row < height; row++) {
        for (x = 0; x < width; x++) {
            /* 该列 x 处直线上应出现的 y 值（取整） */
            int on_line = (int)(k * x + 0.5);
            /* 屏幕行 row 对应的数学 y 值 */
            int screen_y = height - 1 - row;
            if (on_line == screen_y) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
