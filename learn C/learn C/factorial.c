#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main()
{
    int n = 0;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += factorial(i + 1);
    }
    printf("%d", sum);
    return 0;
}

//创建阶乘函数
int factorial(int n)
{
    int factorial_num = 1;
    for (int i = 0; i < n; i++)
    {
        factorial_num *= (i + 1);
    }
    return factorial_num;
}
////复杂度更小的方法
//int ret = 1;
//for (int n = 1; i <= n; i++)
//{
//    ret = ret * i;
//    sum = sum + ret;//只需要一个循环
//}