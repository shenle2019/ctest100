#include <stdio.h>

/* 程序60：字符画综合练习(2)：输出一个等腰三角形（金字塔）。
   分析：第 i 行先输出 n-i 个空格，再输出 2i-1 个 * */

int main(void)
{
    int n = 8;
    int i, j;

    for (i = 1; i <= n; i++) {
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
