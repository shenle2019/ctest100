#include <stdio.h>
#include <time.h>

/* 程序92：时间函数举例(2)：程序运行计时。
   分析：clock() 记录程序起止时刻，
   差值除以 CLOCKS_PER_SEC 得到运行秒数 */

int main(void)
{
    clock_t start, end;
    long i, sum = 0;

    start = clock();

    /* 干点活：累加 1 亿个数 */
    for (i = 1; i <= 100000000; i++) {
        sum += i;
    }

    end = clock();

    printf("sum = %ld\n", sum);
    printf("耗时 %.3f 秒\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}
