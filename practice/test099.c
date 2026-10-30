#include <stdio.h>
#include <string.h>

/* 程序99：有两个磁盘文件 A 和 B，各存放一行字母，要求把这两个文件中的
   信息合并（按字母顺序排列），输出到一个新文件 C 中。
   分析：程序先创建 A、B 文件，读回合并，冒泡排序后写入 C */

int main(void)
{
    FILE *fp;
    char content[200];
    int len, i, j;
    char tmp;

    /* 第一步：准备文件 A 和 B */
    fp = fopen("test099_A.txt", "w");
    fprintf(fp, "bdfa\n");
    fclose(fp);
    fp = fopen("test099_B.txt", "w");
    fprintf(fp, "ceg\n");
    fclose(fp);

    /* 第二步：读 A、B 合并到 content */
    len = 0;
    fp = fopen("test099_A.txt", "r");
    while ((tmp = fgetc(fp)) != EOF && tmp != '\n') {
        content[len++] = tmp;
    }
    fclose(fp);
    fp = fopen("test099_B.txt", "r");
    while ((tmp = fgetc(fp)) != EOF && tmp != '\n') {
        content[len++] = tmp;
    }
    fclose(fp);
    content[len] = '\0';

    /* 第三步：冒泡排序 */
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (content[j] > content[j + 1]) {
                tmp = content[j];
                content[j] = content[j + 1];
                content[j + 1] = tmp;
            }
        }
    }

    /* 第四步：写入文件 C */
    fp = fopen("test099_C.txt", "w");
    fprintf(fp, "%s\n", content);
    fclose(fp);

    printf("合并排序结果: %s，已保存到 test099_C.txt\n", content);
    return 0;
}
