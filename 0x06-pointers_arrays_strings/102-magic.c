#include <stdio.h>
int main(void)
{
	int n;
	int a[2];
	int *p;

	a[2] = 1024;
	p = &n;
	/**
	 * write your line of code here
	 * Remember:
	 * You are not allowed to use the variable a in your new line of code
	 * You are not allowed to modify the variable p
	 * You are not allowed to modify the variable p
	 */
	*p(p + 5) = 98;
	/* so that this prints 98\n' */
	printf("a[2] - %d\n", a[2]);
	return (0);
}
