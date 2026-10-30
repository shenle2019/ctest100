#include <stdio.h>

/* 程序26：利用递归方法求5!
   递归三要素：结束条件 0!=1，递推公式 n! = n*(n-1)! */

long factorial(int n)
{
    if (n <= 1) {
        return 1;                 /* 结束条件 */
    }
    return n * factorial(n - 1);  /* 递推公式，问题每次变小 */
}

int main(void)
{
    int n = 5;
    printf("%d! = %ld\n", n, factorial(n));
    return 0;
}
