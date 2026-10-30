#include <stdio.h>
#include <string.h>

/* 程序35：字符串反转，如将字符串 "abcdef" 反转为 "fedcba"。
   分析：首尾两个下标向中间走，交换对应字符 */

void reverse(char s[])
{
    int len = strlen(s);
    int i;
    char tmp;

    for (i = 0; i < len / 2; i++) {
        tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
    }
}

int main(void)
{
    char s[100];

    printf("请输入字符串: ");
    scanf("%s", s);

    reverse(s);
    printf("反转后: %s\n", s);
    return 0;
}
