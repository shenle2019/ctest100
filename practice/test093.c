#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 程序93：时间函数举例(3)：用 time 做随机数种子。
   分析：srand((unsigned)time(NULL)) 让每次运行的随机数都不同。
   不设种子，每次运行 rand() 的序列完全一样 */

int main(void)
{
    int i;

    printf("无种子时 rand() 前3个: %d %d %d\n", rand(), rand(), rand());

    srand((unsigned)time(NULL));   /* 用当前时间做种子 */
    printf("有时间种子 前3个: %d %d %d\n", rand(), rand(), rand());

    /* 生成 5 个 1-100 的随机数 */
    printf("5 个 1-100 的随机数: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", rand() % 100 + 1);
    }
    printf("\n");
    return 0;
}
