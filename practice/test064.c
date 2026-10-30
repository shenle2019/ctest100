#include <stdio.h>

/* 程序64：字符画组合图形：矩形与三角形组合图案。
   原题 ellipse+rectangle 为 TC 图形库，此处改为字符画实现。
   分析：先输出矩形部分（房身），再在下方输出三角形部分（房顶），
   组合成一个小房子 */

int main(void)
{
    int i, j;

    /* 房顶：等腰三角形，高 5 */
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i + 6; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    /* 房身：矩形 6 行 x 13 列 */
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 13; j++) {
            if (i == 0 || i == 5 || j == 0 || j == 12) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
