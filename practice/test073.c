#include <stdio.h>
#include <stdlib.h>

/* 程序73：反向输出一个链表。
   方法一：递归（先递归再打印，天然反序）。
   方法二：迭代反转链表后再遍历。此处演示两种方法 */

typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* 方法一：递归反向打印 */
void reverse_print(Node *p)
{
    if (p == NULL) {
        return;
    }
    reverse_print(p->next);   /* 先递归到最后一个 */
    printf("%d ", p->data);   /* 回头时打印，顺序就反了 */
}

/* 方法二：迭代反转链表，返回新头节点 */
Node *reverse_list(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    while (curr != NULL) {
        next = curr->next;    /* 记下后继 */
        curr->next = prev;    /* 反转指针 */
        prev = curr;
        curr = next;
    }
    return prev;              /* 新的头节点 */
}

int main(void)
{
    int n = 5, i;
    Node *head = NULL, *tail = NULL, *p;

    /* 创建链表 1->2->3->4->5 */
    for (i = 1; i <= n; i++) {
        Node *new_node = (Node *)malloc(sizeof(Node));
        new_node->data = i;
        new_node->next = NULL;
        if (head == NULL) {
            head = tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }

    printf("原链表: ");
    for (p = head; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");

    printf("递归反序: ");
    reverse_print(head);
    printf("\n");

    head = reverse_list(head);
    printf("迭代反转后: ");
    for (p = head; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");

    /* 释放 */
    while (head != NULL) {
        Node *tmp = head->next;
        free(head);
        head = tmp;
    }
    return 0;
}
