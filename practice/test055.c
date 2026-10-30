#include <stdio.h>

/* 程序55：学习使用按位取反 ~。
   0变1，1变0。对整数 x，~x = -(x+1) */

int main(void)
{
    int a = 5;       /* 0000...0101 */

    printf("a = %d\n", a);
    printf("~a = %d (等于 -(5+1) = -6)\n", ~a);
    printf("~~a = %d (两次取反回到原值)\n", ~~a);
    return 0;
}
