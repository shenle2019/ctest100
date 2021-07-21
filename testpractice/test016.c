#include <stdio.h>
int fun1(int m, int n)
{
	int r;
	r = m % n;
	return r == 0 ? n : fun1(n, r);
}

int fun2(int m, int n)
{
	int t;
	t = m * n / fun1(m, n);
	return t;
}

int main()
{
	int t, a, b;
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	printf("%d\n", fun1(a, b));
	printf("%d\n", fun2(a, b));
	return 0;
}
