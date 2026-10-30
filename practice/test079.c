#include <stdio.h>
#include <string.h>

/* 程序79：字符串排序。
   分析：字符串不能直接比较，要用 strcmp。
   冒泡排序交换字符串本身（strcpy 交换） */

#define N 5

int main(void)
{
    char str[N][20] = {"pear", "apple", "orange", "banana", "grape"};
    char tmp[20];
    int i, j;

    printf("排序前: ");
    for (i = 0; i < N; i++) {
        printf("%s ", str[i]);
    }
    printf("\n");

    /* 冒泡排序，按字典序 */
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                strcpy(tmp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], tmp);
            }
        }
    }

    printf("排序后: ");
    for (i = 0; i < N; i++) {
        printf("%s ", str[i]);
    }
    printf("\n");
    return 0;
}
