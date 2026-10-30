#include <stdio.h>
#include <ctype.h>

/* 程序98：从键盘输入一个字符串，将小写字母全部转换成大写字母，
   然后输出到一个磁盘文件 "test" 中保存。
   分析：读入字符串，用 toupper 逐个转换，写入文件 */

int main(void)
{
    FILE *fp;
    char s[100];
    int i;

    printf("请输入字符串: ");
    scanf("%s", s);

    /* 小写转大写 */
    for (i = 0; s[i] != '\0'; i++) {
        s[i] = toupper(s[i]);
    }

    /* 写入文件 test */
    fp = fopen("test098_test.txt", "w");
    if (fp == NULL) {
        printf("打不开文件\n");
        return 1;
    }
    fprintf(fp, "%s\n", s);
    fclose(fp);

    printf("大写结果: %s，已保存到 test098_test.txt\n", s);
    return 0;
}
