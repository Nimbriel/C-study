#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//while循环
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}

//函数
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;

}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	/*int sum = num1 * num2;
	printf("sum = %d\n", sum);
	int mm = num1 - num2;
	printf("mm = %d\n", mm);*/

	//真正的函数
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}