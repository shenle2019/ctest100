#include <stdio.h>

/* 程序66：输入3个数 a,b,c，按大小顺序输出。
   分析：两两比较交换，参考【程序5】的思路 */

int main(void)
{
    int a, b, c, tmp;

    printf("请输入3个数: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) { tmp = a; a = b; b = tmp; }   /* 保证 a <= b */
    if (a > c) { tmp = a; a = c; c = tmp; }   /* 保证 a 最小 */
    if (b > c) { tmp = b; b = c; c = tmp; }   /* 保证 b <= c */

    printf("从小到大: %d %d %d\n", a, b, c);
    return 0;
}
