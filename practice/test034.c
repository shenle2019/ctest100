#include <stdio.h>

/* 程序34：练习函数调用。写一个 hello 函数，在 main 中调用三次。
   函数三段式：声明、定义、调用 */

void hello(void)     /* 函数定义 */
{
    printf("Hello, function!\n");
}

int main(void)
{
    int i;
    for (i = 0; i < 3; i++) {
        hello();     /* 函数调用 */
    }
    return 0;
}
