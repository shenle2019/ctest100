#include <stdio.h>
#include <string.h>

/* 程序71：编写 input() 和 output() 函数，输入、输出5个学生的数据记录。
   分析：结构体数组 + 两个函数。结构体作参数传指针，避免拷贝 */

#define N 5

typedef struct {
    int id;
    char name[20];
    double score;
} Student;

void input(Student *s)
{
    int i;
    for (i = 0; i < N; i++) {
        printf("第 %d 个学生 学号 姓名 成绩: ", i + 1);
        scanf("%d %s %lf", &s[i].id, s[i].name, &s[i].score);
    }
}

void output(Student *s)
{
    int i;
    printf("\n学号\t姓名\t成绩\n");
    for (i = 0; i < N; i++) {
        printf("%d\t%s\t%.1f\n", s[i].id, s[i].name, s[i].score);
    }
}

int main(void)
{
    Student s[N];
    input(s);       /* 传结构体数组（本质是首元素地址） */
    output(s);
    return 0;
}
