#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	if (a > b)
		printf("%d is greater than %d\n", a, b);
	else if (a < b)
		printf("%d is less than %d\n", a, b);
	else
		printf("%d is equal to %d\n", a, b);
	return 0;
}
