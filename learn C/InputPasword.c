#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char password[10] = { 0 };
	printf("Enter password: ");
	scanf("%s", password);
	//清空输入缓冲区
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认密码（Y/N）：");
	int ret = getchar();
	if (ret == 'Y')
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
	////用循环只读数字
	//char ch = '\0';
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch > '9')
	//		continue;
	//	putchar(ch);
	//}
	//return 0;
}