#include <stdio.h>

/* 程序86：两个字符串连接程序。
   分析：不用 strcat，自己实现：先找到第一个字符串的 '\0'，
   把第二个字符串逐个拷过去 */

void my_strcat(char dst[], char src[])
{
    int i = 0, j = 0;

    while (dst[i] != '\0') {   /* 找到 dst 的结尾 */
        i++;
    }
    while (src[j] != '\0') {   /* 从结尾处开始拷贝 src */
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';             /* 补上结束符 */
}

int main(void)
{
    char a[100] = "hello";
    char b[100] = "world";

    printf("连接前: a=%s, b=%s\n", a, b);
    my_strcat(a, b);
    printf("连接后: a=%s\n", a);
    return 0;
}
