#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//数组，相同元素的集合
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//	//数组，第一个元素的下标为0，用arr[0]表示
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//操作符
//算数操作符：+-*/%
//移位操作符：>> <<
//int main()
//{
//	//如果后面两个操作数都是整数，则结果也是整数
//	float a = 9.0 / 2;
//	printf("%f\n", a);
//	int b = 9 % 2;//取余数
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;//左移操作符，将a的二进制位向左移动1位，相当于乘以2.
//	//&按位与  |按位或  ^按位异或
//	printf("%d\n", b);
//	a = a + 5;//a += 5
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	//0表示假，则非0表示真
	int a = 10;
	printf("%d\n", !a);
	int b = 0;
	printf("%d\n", !b);//此时用1统一表示真
	//运用时像下面这样的操作
	//if (a)如果a为真，做事
	//{
	//}
	//if (!a)如果a为假，做事
	//{
	//}
	a = -5;
	printf("%d\n", a);
	//sizeof用来计算数据类型的大小,后面的括号可以省略，说明sizeof是一个操作符不是函数
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(a));
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
	printf("第四位数据类型的大小=%zu\n", sizeof(arr[3]));
	int num = sizeof(arr) / sizeof(arr[0]);
		printf("数组个数=%d\n", num);
	return 0;


}