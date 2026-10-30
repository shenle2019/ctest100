#include <stdio.h>
#include <time.h>

/* 程序91：时间函数举例(1)：打印当前时间。
   分析：time(NULL) 拿时间戳，localtime 转成可读格式 */

int main(void)
{
    time_t now = time(NULL);              /* 当前时间的时间戳（秒） */
    struct tm *t = localtime(&now);       /* 转成本地时间结构 */

    printf("时间戳: %ld\n", (long)now);
    printf("当前时间: %d-%02d-%02d %02d:%02d:%02d\n",
           t->tm_year + 1900,             /* 年从 1900 起算 */
           t->tm_mon + 1,                 /* 月从 0 起算 */
           t->tm_mday,
           t->tm_hour,
           t->tm_min,
           t->tm_sec);
    return 0;
}
