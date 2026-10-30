#include <stdio.h>

/* 程序69：报数游戏（约瑟夫环）。
   有 n 个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），
   凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
   分析：数组标记出圈状态，环形遍历的下标技巧 i = (i + 1) % n */

int main(void)
{
    int n = 10;                /* 10 个人 */
    int out[10] = {0};         /* 出圈标记，1 表示已出圈 */
    int remain = n;            /* 剩下的人数 */
    int count = 0;             /* 报数计数器 */
    int i = 0;                 /* 当前报数的人（从0号开始） */

    while (remain > 1) {
        if (!out[i]) {         /* 没出圈的人才报数 */
            count++;
            if (count == 3) {  /* 报到 3 出圈 */
                out[i] = 1;
                remain--;
                count = 0;
            }
        }
        i = (i + 1) % n;       /* 环形下一位 */
    }

    for (i = 0; i < n; i++) {
        if (!out[i]) {
            printf("最后留下的是原来的第 %d 号\n", i + 1);
        }
    }
    return 0;
}
