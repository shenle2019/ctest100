#include <stdio.h>

/* 程序54：取一个整数 a 从右端开始的 4~7 位。
   分析：先右移 4 位把目标位挪到低端，再与 0xF（1111）取低 4 位 */

int main(void)
{
    unsigned int a = 365;    /* 二进制 101101101，低 8 位是 0110 1101 */

    printf("a = %u (二进制 %s)\n", a, "101101101");

    unsigned int bits = (a >> 4) & 0xF;   /* 右移4位再取低4位 */

    printf("右端 4~7 位 = %u (二进制 %04d)\n", bits,
           bits & 8 ? 1000 : 0);   /* 简化为直接输出十进制 */
    return 0;
}
