#include <stdio.h>

/* 程序44：学习使用 extern 的用法。
   分析：extern 声明外部变量/函数，表示"定义在别处，这里只是引用"。
   真实场景是跨文件共享全局变量（如 test044.c + test044_lib.c 一起编译）。
   本文件演示语法：extern 声明后，函数内可直接使用外部变量。 */

int global_count = 10;   /* 全局变量，定义在文件作用域 */

void show(void)
{
    extern int global_count;   /* extern 声明：引用外部变量 */
    printf("global_count = %d\n", global_count);
}

int main(void)
{
    show();
    global_count = 20;         /* 修改全局变量 */
    show();
    return 0;
}
