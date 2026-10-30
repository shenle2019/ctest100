#include <stdio.h>

/* 程序47：宏 #define 命令练习(2)：带参宏。
   分析：带参宏是纯文本替换，参数和整个表达式都要加括号，
   防止展开后运算符优先级出错 */

#define SQUARE(x) ((x) * (x))          /* 不加括号 SQUARE(1+2) 会变成 1+2*1+2 */
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SUM(a, b) ((a) + (b))

int main(void)
{
    printf("SQUARE(5)   = %d\n", SQUARE(5));
    printf("SQUARE(1+2) = %d\n", SQUARE(1 + 2));   /* 9，括号保证正确 */
    printf("MAX(3, 8)   = %d\n", MAX(3, 8));
    printf("SUM(10, 20) = %d\n", SUM(10, 20));
    return 0;
}
