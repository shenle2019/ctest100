#include <stdio.h>
#include <string.h>

/* 程序95：简单的结构体应用实例。
   分析：定义结构体存图书信息，创建变量、访问成员、用函数处理 */

typedef struct {
    char title[50];
    char author[20];
    double price;
} Book;

/* 输出图书信息 */
void show_book(Book b)
{
    printf("《%s》 %s 著，%.2f 元\n", b.title, b.author, b.price);
}

int main(void)
{
    Book b1 = {"C语言程序设计", "谭浩强", 45.5};
    Book b2 = {"C Primer Plus", "Stephen Prata", 89.0};

    show_book(b1);
    show_book(b2);

    /* 修改成员 */
    b1.price = 39.9;
    printf("打折后: ");
    show_book(b1);
    return 0;
}
