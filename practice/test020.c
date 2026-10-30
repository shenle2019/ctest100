#include <stdio.h>

/* 程序20：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
   再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？ */

int main(void)
{
    double height = 100.0;  /* 当前高度 */
    double total = 0.0;     /* 总路程 */
    int i;

    for (i = 1; i <= 10; i++) {
        total += height;            /* 落下这一段 */
        height /= 2.0;              /* 反弹高度减半 */
        if (i < 10) {
            total += height;        /* 除最后一次外，还要算弹起这一段 */
        }
    }

    printf("第10次落地时共经过 %.6f 米\n", total);
    printf("第10次反弹高度 %.6f 米\n", height);
    return 0;
}
