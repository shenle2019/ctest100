#include <stdio.h>

/* 程序59：字符画综合练习(1)：输出一个直角三角形。
   分析：第 i 行输出 i 个 *，i 从 1 到 n */

int main(void)
{
    int n = 8;
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
