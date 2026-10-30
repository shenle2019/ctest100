#include <stdio.h>

/* 程序41：学习 static 定义静态变量的用法。
   分析：static 局部变量只初始化一次，函数调用结束后值保留 */

void counter(void)
{
    static int count = 0;   /* 只初始化这一次 */
    count++;
    printf("函数被调用了 %d 次\n", count);
}

int main(void)
{
    int i;
    for (i = 0; i < 5; i++) {
        counter();   /* 输出 1,2,3,4,5 而不是 1,1,1,1,1 */
    }
    return 0;
}
