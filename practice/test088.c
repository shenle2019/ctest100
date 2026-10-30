#include <stdio.h>

/* 程序88：读取7个数（1-50）的整数值，每读取一个值，
   程序打印出该值个数的 *。
   分析：循环读入7个数，每个数用内层循环打印对应数量的 * */

int main(void)
{
    int n, i, j;

    printf("请输入7个整数(1-50): ");
    for (i = 0; i < 7; i++) {
        scanf("%d", &n);
        printf("%3d | ", n);
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
