#include <stdio.h>

/* 程序43：学习使用 static 的另一用法。
   分析：用 static 变量统计函数被调用的次数，
   与普通局部变量的区别在于值不会随函数结束而丢失 */

int call_count(void)
{
    static int times = 0;    /* 保留上次调用后的值 */
    times++;
    return times;
}

int main(void)
{
    int i;
    for (i = 0; i < 3; i++) {
        printf("第 %d 次调用\n", call_count());
    }
    return 0;
}
