#include <stdio.h>

/* 程序49：#if #ifdef 和 #ifndef 的综合应用。
   分析：条件编译两大用途：
   1. 平台差异代码：同一份源码在不同平台上编译出不同部分
   2. 防止头文件重复包含（见 test050.h） */

#define DEBUG      /* 定义 DEBUG，打开调试代码；注释掉就关闭 */

int main(void)
{
    int x = 42;

#ifdef DEBUG
    printf("调试模式: x = %d\n", x);      /* DEBUG 定义了才编译这一行 */
#endif

#if 0
    printf("这段代码永远不会被编译\n");   /* #if 0 相当于注释掉一大段 */
#endif

    printf("程序正常运行\n");
    return 0;
}
