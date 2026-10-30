#include <stdio.h>
#include <string.h>

/* 程序78：找到年龄最大的人，并输出。
   分析：结构体数组存姓名年龄，遍历比较找出最大值 */

#define N 4

typedef struct {
    char name[20];
    int age;
} Person;

int main(void)
{
    Person people[N] = {
        {"zhang", 30},
        {"li", 25},
        {"wang", 35},
        {"zhao", 28}
    };
    int i, max_idx = 0;

    for (i = 1; i < N; i++) {
        if (people[i].age > people[max_idx].age) {
            max_idx = i;    /* 记录年龄最大的下标 */
        }
    }

    printf("年龄最大的是 %s，%d 岁\n", people[max_idx].name, people[max_idx].age);
    return 0;
}
