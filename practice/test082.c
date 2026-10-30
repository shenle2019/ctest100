#include <stdio.h>
#include <string.h>

/* 程序82：八进制转换为十进制。
   分析：按权展开：第 i 位乘以 8^i 累加。
   如 123(八进制) = 1*64 + 2*8 + 3 = 83 */

int main(void)
{
    char oct[20];
    int len, i, decimal = 0, weight = 1;

    printf("请输入一个八进制数: ");
    scanf("%s", oct);

    len = strlen(oct);
    /* 从最低位（最后一位）往高位算 */
    for (i = len - 1; i >= 0; i--) {
        decimal += (oct[i] - '0') * weight;   /* 字符转数字再乘权 */
        weight *= 8;                          /* 权每次乘 8 */
    }

    printf("八进制 %s = 十进制 %d\n", oct, decimal);
    return 0;
}
