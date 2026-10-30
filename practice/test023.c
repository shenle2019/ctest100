#include <stdio.h>

/* 程序23：打印出如下图案（菱形）
      *
     ***
    *****
   *******
    *****
     ***
      *
   分析：分成上下两部分，先空格后星号 */

int main(void)
{
    int i, j;

    /* 上半部分：4行，星号 1,3,5,7 */
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    /* 下半部分：3行，星号 5,3,1 */
    for (i = 3; i >= 1; i--) {
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
