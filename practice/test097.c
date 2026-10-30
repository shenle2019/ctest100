#include <stdio.h>

/* 程序97：从键盘输入一些字符，逐个把它们送到磁盘上去，
   直到输入一个 # 为止。
   分析：循环读字符，写入文件，遇到 # 停止 */

int main(void)
{
    FILE *fp;
    char ch;

    fp = fopen("test097_output.txt", "w");
    if (fp == NULL) {
        printf("打不开文件\n");
        return 1;
    }

    printf("请输入字符（以 # 结束）: \n");

    /* 循环读字符写入文件 */
    ch = getchar();
    while (ch != '#') {
        fputc(ch, fp);          /* 写一个字符到文件 */
        ch = getchar();
    }

    fclose(fp);
    printf("已写入 test097_output.txt\n");
    return 0;
}
