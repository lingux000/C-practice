#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	int left = 0;
	int right = strlen(arr1) - 1;
	//�ȸı����飬�ٴ�ӡ���ȷֶ�ѭ����ӡ����ܶ�ֱ�����ַ�����ӡ
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		//�����Ļ
		system("cls");
		left++;
		right--;
	}
	printf("%s", arr1);
	return 0;
}
