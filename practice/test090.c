#include <stdio.h>

/* 程序90：专升本一题，读程序写结果。
   阅读题：分析递归调用与变量作用域。
   下面的 fun(3) 输出是什么？先手推再运行对照。
   手推：fun(3) -> fun(2) -> fun(1) -> fun(0) 返回
   fun(1) 打印 1，fun(2) 打印 2，fun(3) 打印 3
   输出：1 2 3 */

void fun(int n)
{
    if (n > 0) {
        fun(n - 1);         /* 先递归 */
        printf("%d ", n);   /* 回头时打印 */
    }
}

int main(void)
{
    printf("fun(3) 输出: ");
    fun(3);
    printf("\n");
    return 0;
}
