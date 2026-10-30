#include <stdio.h>

/* 程序76：编写一个函数，输入 n 为偶数时，调用函数求 1/2+1/4+...+1/n，
   当输入 n 为奇数时，调用函数 1/1+1/3+...+1/n。
   分析：根据 n 的奇偶选择起点和步长。整数除法要写成浮点 */

double even_sum(int n)      /* 偶数：1/2 + 1/4 + ... + 1/n */
{
    double sum = 0.0;
    int i;
    for (i = 2; i <= n; i += 2) {
        sum += 1.0 / i;
    }
    return sum;
}

double odd_sum(int n)       /* 奇数：1/1 + 1/3 + ... + 1/n */
{
    double sum = 0.0;
    int i;
    for (i = 1; i <= n; i += 2) {
        sum += 1.0 / i;
    }
    return sum;
}

int main(void)
{
    int n;

    printf("请输入 n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("偶数序列和 1/2+1/4+...+1/%d = %.6f\n", n, even_sum(n));
    } else {
        printf("奇数序列和 1/1+1/3+...+1/%d = %.6f\n", n, odd_sum(n));
    }
    return 0;
}
