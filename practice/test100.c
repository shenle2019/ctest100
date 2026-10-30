#include <stdio.h>

/* 程序100：毕业大作业级别的小综合。
   有五个学生，每个学生有3门课的成绩，从键盘输入以上数据
   （包括学生号，姓名，三门课成绩），计算出平均成绩，
   把原有的数据和计算出的平均分数存放在磁盘文件 "stud" 中。
   结构体、数组、循环、文件四合一 */

#define N 5
#define COURSES 3

typedef struct {
    int id;
    char name[20];
    double scores[COURSES];
    double average;
} Student;

int main(void)
{
    Student stu[N];
    FILE *fp;
    int i, j;
    double sum;

    /* 输入学生数据 */
    for (i = 0; i < N; i++) {
        printf("学生 %d 学号 姓名: ", i + 1);
        scanf("%d %s", &stu[i].id, stu[i].name);
        printf("三门课成绩: ");
        sum = 0;
        for (j = 0; j < COURSES; j++) {
            scanf("%lf", &stu[i].scores[j]);
            sum += stu[i].scores[j];
        }
        stu[i].average = sum / COURSES;    /* 平均成绩 */
    }

    /* 写入文件 stud */
    fp = fopen("test100_stud.txt", "w");
    if (fp == NULL) {
        printf("打不开文件\n");
        return 1;
    }

    fprintf(fp, "学号\t姓名\t成绩1\t成绩2\t成绩3\t平均分\n");
    for (i = 0; i < N; i++) {
        fprintf(fp, "%d\t%s\t%.1f\t%.1f\t%.1f\t%.2f\n",
                stu[i].id, stu[i].name,
                stu[i].scores[0], stu[i].scores[1], stu[i].scores[2],
                stu[i].average);
    }
    fclose(fp);

    /* 同时打印到屏幕 */
    printf("\n学号\t姓名\t成绩1\t成绩2\t成绩3\t平均分\n");
    for (i = 0; i < N; i++) {
        printf("%d\t%s\t%.1f\t%.1f\t%.1f\t%.2f\n",
               stu[i].id, stu[i].name,
               stu[i].scores[0], stu[i].scores[1], stu[i].scores[2],
               stu[i].average);
    }
    printf("\n已保存到 test100_stud.txt\n");
    return 0;
}
