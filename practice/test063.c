#include <stdio.h>

/* 程序63：字符画椭圆。
   原题 ellipse 为 TC 图形库，此处改为字符画实现。
   分析：椭圆方程 x^2/a^2 + y^2/b^2 <= 1，遍历坐标判断点是否在椭圆内。
   字符宽高比约 1:2，x 方向要按 2 倍坐标补偿 */

int main(void)
{
    double a = 14.0;   /* 横半轴 */
    double b = 7.0;    /* 纵半轴 */
    int x, y;

    for (y = (int)b; y >= -(int)b; y--) {
        for (x = -(int)(2 * a); x <= (int)(2 * a); x++) {
            double dx = x / 2.0;    /* 补偿字符宽高比 */
            if (dx * dx / (a * a) + y * y / (b * b) <= 1.0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
