#include <stdio.h>

/* 程序70：写一个函数，求一个字符串的长度，在 main 函数中
   输入字符串，并输出其长度。
   分析：从首字符开始数，直到遇到 '\0'。自己实现 strlen */

int my_strlen(char s[])
{
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

int main(void)
{
    char s[100];

    printf("请输入字符串: ");
    scanf("%s", s);

    printf("字符串长度为 %d\n", my_strlen(s));
    return 0;
}
