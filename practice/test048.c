#include <stdio.h>

/* 程序48：宏 #define 命令练习(3)。
   分析：宏与函数的区别：
   宏：预处理期展开，无类型检查，无调用开销，可能多次求值参数
   函数：运行时调用，有类型检查，有调用开销，参数只求值一次
   带副作用的表达式（如 i++）传给宏会被求值多次，这是宏的坑 */

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define CUBE(x) ((x) * (x) * (x))

int max_func(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int a = 5, b = 9;

    printf("宏 MAX(5, 9)    = %d\n", MAX(a, b));
    printf("函数 max(5, 9)  = %d\n", max_func(a, b));
    printf("宏 CUBE(3)      = %d\n", CUBE(3));

    /* 演示宏的坑：参数带副作用，被求值两次，结果出乎意料 */
    a = 3;
    printf("MAX(a++, 5) 宏   = %d, a = %d\n", MAX(a++, 5), a);  /* a 加了两次 */
    a = 3;
    printf("max(a++, 5) 函数 = %d, a = %d\n", max_func(a++, 5), a);  /* a 加一次 */
    return 0;
}
