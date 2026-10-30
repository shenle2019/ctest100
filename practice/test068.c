#include <stdio.h>

/* 程序68：有 n 个整数，使其前面各数顺序向后移 m 个位置，
   最后 m 个数变成最前面的 m 个数。
   分析：三次反转法：先反转整个数组，再反转前 m 个，
   最后反转后 n-m 个 */

void reverse(int a[], int start, int end)
{
    int tmp;
    while (start < end) {
        tmp = a[start];
        a[start] = a[end];
        a[end] = tmp;
        start++;
        end--;
    }
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int m = 3;
    int i;

    printf("移位前: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    m = m % n;                 /* 防止 m 大于 n */
    reverse(a, 0, n - 1);      /* 整体反转 */
    reverse(a, 0, m - 1);      /* 前 m 个再反转 */
    reverse(a, m, n - 1);      /* 后 n-m 个再反转 */

    printf("右移 %d 位后: ", m);
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
