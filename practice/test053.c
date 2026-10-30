#include <stdio.h>

/* 程序53：学习使用按位异或 ^。
   不同为1，相同为0。经典用途：不借助临时变量交换两个数 */

int main(void)
{
    int a = 12;      /* 1100 */
    int b = 10;      /* 1010 */

    printf("a = %d (1100), b = %d (1010)\n", a, b);
    printf("a ^ b = %d (0110)\n", a ^ b);

    /* 用途：异或交换法，不需要第三个变量 */
    a = 3;
    b = 5;
    printf("交换前: a=%d, b=%d\n", a, b);
    a = a ^ b;
    b = a ^ b;   /* 此时 b = 原来的 a */
    a = a ^ b;   /* 此时 a = 原来的 b */
    printf("交换后: a=%d, b=%d\n", a, b);

    /* 用途：简单加密——同一密钥异或两次还原 */
    char ch = 'A';
    char key = 0x2A;
    printf("原字符 %c，加密后 %d，解密后 %c\n", ch, ch ^ key, (ch ^ key) ^ key);
    return 0;
}
