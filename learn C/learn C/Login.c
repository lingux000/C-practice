#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char log[10] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", log);
		//�⺯��strcmp(),�ж������ַ����Ƿ���ȣ���ȷ����0
		if (strcmp(log,"Y123456") == 0) 
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	return 0;
}