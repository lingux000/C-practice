#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = {1, 3, 5, 7, 9, 10, 13, 15, 17};
	int k = 19;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = left + (right - left) / 2; //防止整数溢出
	while (left <= right)
	{
		if (k == arr[mid])
			break;
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	else
	{
		printf("%d", mid);
	}
	

}