#include <stdio.h>
#include <string.h>

/* 程序32：删除一个字符串中的指定字母。
   如：字符串 "aca"，删除其中的字母 a。
   分析：双下标法，不是指定字符的往前搬 */

int main(void)
{
    char s[100];
    char ch;
    int i, j = 0;

    printf("请输入字符串: ");
    scanf("%s", s);
    printf("请输入要删除的字母: ");
    scanf(" %c", &ch);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ch) {
            s[j] = s[i];   /* 保留的字符搬到前面 */
            j++;
        }
    }
    s[j] = '\0';           /* 新的结束符 */

    printf("删除后: %s\n", s);
    return 0;
}
