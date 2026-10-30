#include <stdio.h>

/* 程序42：学习使用 auto 定义变量的用法。
   分析：auto 是默认存储类，局部变量不写 static 就是 auto，
   每次进入函数重新创建，离开函数销毁 */

void test(void)
{
    auto int x = 100;      /* auto 可省略，显式写出与 int x = 100 等价 */
    x++;
    printf("x = %d\n", x);
}

int main(void)
{
    test();   /* 101 */
    test();   /* 还是 101，x 每次都重建，不像 static 会保留 */
    return 0;
}
