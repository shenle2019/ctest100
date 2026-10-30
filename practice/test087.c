#include <stdio.h>

/* 程序87：回答结果（结构体变量传递）。
   分析：结构体作函数参数是值传递——函数收到的是副本，
   函数内修改不影响原结构体；传指针才能改 */

typedef struct {
    int x;
    int y;
} Point;

void modify_by_value(Point p)      /* 值传递：改的是副本 */
{
    p.x = 100;
    p.y = 200;
}

void modify_by_pointer(Point *p)   /* 指针传递：改的是原结构体 */
{
    p->x = 100;
    p->y = 200;
}

int main(void)
{
    Point p1 = {1, 2};
    Point p2 = {3, 4};

    modify_by_value(p1);
    printf("值传递后: (%d, %d) 原值不变\n", p1.x, p1.y);

    modify_by_pointer(&p2);
    printf("指针传递后: (%d, %d) 已被修改\n", p2.x, p2.y);
    return 0;
}
