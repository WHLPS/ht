#include <stdio.h>

int main()
{
	int a=0;
	int b=0;
	printf("请输入两个数字:");
	scanf("%d %d",&a,&b);
	double  average=(a+b)/2.0;
	printf("a和b的平均值为%f",average);
	
	return 0;
}
