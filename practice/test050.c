#include <stdio.h>
#include "test050.h"    /* 自己写的头文件用双引号，先搜当前目录 */

/* 程序50：#include 的应用练习。
   分析："" 先搜当前目录，<> 只搜系统目录。
   头文件里放声明和宏，源文件里放实现。多文件编译见 notes/05 */

int add(int a, int b)          /* 实现头文件里声明的函数 */
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main(void)
{
    printf("版本 %d，作者 %s\n", VERSION, AUTHOR);
    printf("3 + 4 = %d\n", add(3, 4));
    printf("3 * 4 = %d\n", multiply(3, 4));
    return 0;
}
