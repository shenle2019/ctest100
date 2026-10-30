#include <stdio.h>

/* 程序65：字符画菱形图案。
   原题为图形库，此处改为字符画实现。
   分析：上半部分逐行增加 *，下半部分逐行减少 *，
   空格与 * 配合居中。与【程序23】思路一致 */

int main(void)
{
    int n = 6;      /* 上半部分行数 */
    int i, j;

    /* 上半部分 */
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    /* 下半部分 */
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
