#include <stdio.h>
#include <math.h>

/* 程序83：求 0-7 所能组成的奇数个数。
   分析：奇数末位必须是 1/3/5/7（4 种）。
   1 位数：4 个
   2 位数：首位不能为 0，7*4 = 28 个
   n 位数：7 * 8^(n-2) * 4 个（n>=2） */

int main(void)
{
    int n, i;
    long total = 0;

    for (n = 1; n <= 8; n++) {          /* 最多 8 位数 */
        if (n == 1) {
            total += 4;                 /* 1 位数：1,3,5,7 */
        } else {
            total += 7 * (long)pow(8, n - 2) * 4;
        }
    }

    printf("0-7 能组成的奇数个数: %ld\n", total);
    return 0;
}
