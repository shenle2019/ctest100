#include <stdio.h>

/* 程序46：宏 #define 命令练习(1)。
   分析：#define 是预处理期的文本替换，定义常量用全大写命名。
   宏不是变量，没有类型，不占内存 */

#define PI 3.14159
#define MAX_NUM 100
#define GREETING "Hello, C"

int main(void)
{
    double r = 5.0;
    double area = PI * r * r;

    printf("%s\n", GREETING);
    printf("半径为 %.1f 的圆面积: %.3f\n", r, area);
    printf("MAX_NUM = %d\n", MAX_NUM);
    return 0;
}
