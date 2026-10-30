#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 程序94：猜谜游戏。
   程序随机生成一个 1~100 的数，用户猜，提示大了还是小了，
   直到猜中，统计猜测次数 */

int main(void)
{
    int target, guess, count = 0;

    srand((unsigned)time(NULL));
    target = rand() % 100 + 1;      /* 1-100 的目标数 */

    printf("猜一个 1-100 的数: \n");

    do {
        printf("请输入你的猜测: ");
        scanf("%d", &guess);
        count++;

        if (guess > target) {
            printf("大了\n");
        } else if (guess < target) {
            printf("小了\n");
        }
    } while (guess != target);

    printf("恭喜猜中！答案就是 %d，共猜了 %d 次\n", target, count);
    return 0;
}
