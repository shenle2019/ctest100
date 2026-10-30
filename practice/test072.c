#include <stdio.h>
#include <stdlib.h>

/* 程序72：创建一个链表。
   分析：节点包含数据和 next 指针。
   用 malloc 动态创建节点，尾插法串成链表 */

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main(void)
{
    int n = 5, i;
    Node *head = NULL, *tail = NULL, *p;

    /* 尾插法创建 5 个节点：1, 2, 3, 4, 5 */
    for (i = 1; i <= n; i++) {
        Node *new_node = (Node *)malloc(sizeof(Node));
        if (new_node == NULL) {
            printf("内存分配失败\n");
            return 1;
        }
        new_node->data = i;
        new_node->next = NULL;

        if (head == NULL) {       /* 第一个节点既是头也是尾 */
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node; /* 接到尾部 */
            tail = new_node;       /* 更新尾节点 */
        }
    }

    /* 遍历打印 */
    printf("链表内容: ");
    for (p = head; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");

    /* 释放内存 */
    p = head;
    while (p != NULL) {
        Node *tmp = p->next;
        free(p);
        p = tmp;
    }
    return 0;
}
