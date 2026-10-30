#include <stdio.h>

/* 程序22：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，
   乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。
   a说他不和x比，c说他不和x,z比，请编程序找出三对赛手的名单 */

int main(void)
{
    char i, j, k;   /* i 是 a 的对手，j 是 b 的对手，k 是 c 的对手 */

    for (i = 'x'; i <= 'z'; i++) {
        for (j = 'x'; j <= 'z'; j++) {
            if (i != j) {               /* 对手不能重复 */
                for (k = 'x'; k <= 'z'; k++) {
                    if (i != k && j != k) {
                        /* a 不和 x 比，c 不和 x、z 比 */
                        if (i != 'x' && k != 'x' && k != 'z') {
                            printf("比赛名单: a--%c, b--%c, c--%c\n", i, j, k);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
