#define _CRT_SECURE_NO_WARNINGS 1

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

#include <stdio.h>

int main()
{
	int a = 0, sum = 0;
	printf("请输入一个数字：");
	scanf("%d", &a);
	sum = a + a * 11 + a * 111 + a * 1111 + a * 11111;
	printf("Sn = %d\n", sum);

	return 0;
}
//
///*
//思路：
//通过观察可以发现，该表达式的第i项中有i个a数字，因此：
//假设第i项为temp，则第i+1项为temp*10+a
//具体参考以下代码
//*/
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}