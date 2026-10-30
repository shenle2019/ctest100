#include <stdio.h>
#include <ctype.h>

/* 程序31：请输入星期几的第一个字母来判断一下是星期几，
   如果第一个字母一样，则继续判断第二个字母。
   Monday/Tuesday/Wednesday/Thursday/Friday/Saturday/Sunday
   T 有 Tuesday/Thursday 冲突，S 有 Saturday/Sunday 冲突 */

int main(void)
{
    char first, second;

    printf("请输入第一个字母: ");
    scanf(" %c", &first);
    first = toupper(first);

    switch (first) {
        case 'M':
            printf("Monday\n");
            break;
        case 'W':
            printf("Wednesday\n");
            break;
        case 'F':
            printf("Friday\n");
            break;
        case 'T':
            printf("请输入第二个字母: ");
            scanf(" %c", &second);
            second = toupper(second);
            if (second == 'U') {
                printf("Tuesday\n");
            } else if (second == 'H') {
                printf("Thursday\n");
            } else {
                printf("没有这一天\n");
            }
            break;
        case 'S':
            printf("请输入第二个字母: ");
            scanf(" %c", &second);
            second = toupper(second);
            if (second == 'A') {
                printf("Saturday\n");
            } else if (second == 'U') {
                printf("Sunday\n");
            } else {
                printf("没有这一天\n");
            }
            break;
        default:
            printf("没有这一天\n");
    }
    return 0;
}
