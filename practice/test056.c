#include <stdio.h>

/* 程序56：在控制台输出一个圆形图案。
   原题画圆为 TC 图形库（graphics.h），此处改为字符画实现。
   分析：遍历坐标系每个点，x^2+y^2 <= r^2 的点在圆内。
   注意字符宽高比约 1:2，x 方向半径补偿为 2 倍 */

int main(void)
{
    int r = 10;
    int x, y;

    for (y = r; y >= -r; y--) {
        for (x = -2 * r; x <= 2 * r; x++) {
            /* 字符格子约 1:2，所以 x 方向上按 2 倍坐标参与计算 */
            double dx = x / 2.0;
            if (dx * dx + y * y <= r * r) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
