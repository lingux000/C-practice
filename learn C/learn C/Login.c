#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char log[10] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë£º");
		scanf("%s", log);
		//¿âº¯Êýstrcmp(),ÅÐ¶ÏÁ½¸ö×Ö·û´®ÊÇ·ñÏàµÈ£¬ÕýÈ··µ»Ø0
		if (strcmp(log,"Y123456") == 0) 
		{
			printf("µÇÂ¼³É¹¦\n");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó\n");
		}
	}
	return 0;
}