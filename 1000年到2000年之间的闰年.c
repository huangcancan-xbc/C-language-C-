#include <stdio.h>
//打印1000年到2000年之间的闰年
//闰年：
//1. 能被4整除，并且不能被100整除是闰年
//2. 能被400整除是闰年
int main()
{
	int a=0;
	for(a=1000;a<=2000;a++)
	{
		if((a%4==0&&a%100!=0)||a%400==0)
		{
			printf("%d ",a);
		}
	}
	return 0;
}
