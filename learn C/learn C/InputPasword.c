#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char password[10] = { 0 };
	printf("Enter password: ");
	scanf("%s", password);
	//������뻺����
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�����루Y/N����");
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
	////��ѭ��ֻ������
	//char ch = '\0';
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch > '9')
	//		continue;
	//	putchar(ch);
	//}
	//return 0;
}