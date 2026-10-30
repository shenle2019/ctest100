#include <stdio.h>
#include <stdlib.h>

/* 程序74：连接两个链表。
   分析：找到第一个链表的尾节点，把它的 next 指向第二个链表的头节点 */

typedef struct Node {
    int data;
    struct Node *next;
} Node;

/* 创建链表：值为 start 到 end */
Node *create_list(int start, int end)
{
    Node *head = NULL, *tail = NULL;
    int i;
    for (i = start; i <= end; i++) {
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
    return head;
}

void print_list(Node *head)
{
    Node *p;
    for (p = head; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
}

int main(void)
{
    Node *list1 = create_list(1, 3);   /* 1->2->3 */
    Node *list2 = create_list(4, 6);   /* 4->5->6 */
    Node *p;

    printf("链表1: ");
    print_list(list1);
    printf("链表2: ");
    print_list(list2);

    /* 连接：找链表1的尾节点，next 指向链表2的头 */
    if (list1 == NULL) {
        list1 = list2;                 /* 空链表直接接上 */
    } else {
        p = list1;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = list2;
    }

    printf("连接后: ");
    print_list(list1);

    /* 释放 */
    while (list1 != NULL) {
        Node *tmp = list1->next;
        free(list1);
        list1 = tmp;
    }
    return 0;
}
