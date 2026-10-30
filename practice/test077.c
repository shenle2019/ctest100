#include <stdio.h>

/* 程序77：填空练习（指向指针的指针）。
   分析：二级指针 int **pp 指向 int *。
   用二级指针访问一级指针指向的值需要两次解引用 */

int main(void)
{
    int a = 10;
    int *p = &a;        /* 一级指针：指向 int */
    int **pp = &p;      /* 二级指针：指向 int* */

    printf("a 的值: %d\n", a);
    printf("*p = %d\n", *p);        /* 一次解引用 */
    printf("**pp = %d\n", **pp);    /* 两次解引用 */

    **pp = 99;                      /* 通过二级指针修改 a */
    printf("修改后 a = %d\n", a);

    /* 二级指针改一级指针的指向 */
    int b = 20;
    *pp = &b;                       /* p 改为指向 b */
    printf("*p = %d (现在指向 b)\n", *p);
    return 0;
}
