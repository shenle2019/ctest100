#include <stdio.h>

/* 程序27：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
   递归的妙处：先递归后输出，字符自然反序 */

void reverse_print(int n)
{
    char c;

    if (n <= 0) {
        return;
    }
    c = getchar();          /* 读一个字符 */
    reverse_print(n - 1);   /* 先递归读后面的字符 */
    putchar(c);             /* 回头时再输出，顺序就反了 */
}

int main(void)
{
    printf("请输入5个字符: ");
    reverse_print(5);
    printf("\n");
    return 0;
}
