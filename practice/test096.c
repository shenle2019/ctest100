#include <stdio.h>
#include <string.h>

/* 程序96：计算字符串中子串出现的次数。
   分析：用 strstr 在主串中循环查找子串，
   每找到一次计数加一，从下一个位置继续找 */

int main(void)
{
    char str[] = "ababab";
    char sub[] = "ab";
    char *p = str;
    int count = 0;

    while ((p = strstr(p, sub)) != NULL) {   /* 找到子串 */
        count++;
        p += 1;                /* 从下一个字符继续找（支持重叠匹配） */
    }

    printf("主串 %s 中子串 %s 出现了 %d 次\n", str, sub, count);
    return 0;
}
