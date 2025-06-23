#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("The num is even");
	}
	else
	{
		printf("The num is odd");

	}
	return 0;
}