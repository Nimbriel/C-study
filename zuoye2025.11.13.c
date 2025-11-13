#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//main()
//{
//	int m = 5;
//	if (m++ > 5)
//		printf("%d\n", m);
//	else
//		printf("%d\n",m--);
//}

//#include<stdio.h>
//main()
//{
//	int a = 1, b = 2;
//	printf("%d\n",a>b ? a : b+1);
//}

//#include<stdio.h>
//main()
//{
//	int x = 1, y = 2, z = 3;
//	printf("%d\n",(x<y ? x : y)==z++);
//}

//#include<stdio.h>
//
//int main()
//{
//    int year, month;
//
//    printf("请输入年份和月份（用空格分隔）：");
//    if (scanf("%d %d", &year, &month) != 2)
//    {
//        printf("输入格式错误。\n");
//        return 1;
//    }
//
//    // 年份与月份
//    if (year < 0 || month < 1 || month > 12)
//    {
//        printf("输入错误：年份或月份不合法。\n");
//        return 1;
//    }
//
//    int days;
//
//    // 判断闰年
//    int run = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//
//    switch (month)
//    {
//    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//        days = 31;
//        break;
//    case 4: case 6: case 9: case 11:
//        days = 30;
//        break;
//    case 2:
//        days = run ? 29 : 28;
//        break;
//    default:
//        printf("输入错误。\n");
//        return 1;
//    }
//
//    printf("%d年%d月共有%d天。\n", year, month, days);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double x = 0;
//	printf("请输入实数x的值：");
//	scanf("%lf",&x);
//	if (scanf("%lf", &x) != 1)
//	{
//		printf("输入错误。\n");
//		return 1;
//	}
//	double y;
//	y = x*x*x*x - 3*x*x - 8*x - 30;
//	if (y)
//		printf("N");
//	else
//		printf("Y");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	printf("请输入4位正整数：\n");
//	scanf("%d",&x);
//	int y = scanf;
//	//判断输入是否合法
//	if (y != 1 || x > 9999 || x < 1)
//	{
//		printf("输入错误信息");
//	}
//	int a = (x % 1000);
//	x %= 1000;
//	int b = (x % 100);
//	x %= 100;
//	int c = (x % 10);
//	x %= 10;
//	int d = x;
//	int m = d * 1000 + c * 100 + b * 10 + a;
//	printf("四位数逆序排列为：%d\n",m);
//	int flag = 1;
//	while(flag)
//	{
//		if (a > b && a > c && a > d)
//		{
//			while (flag)
//			{
//				if (b > c && b > d)
//				{
//					if (c > d)
//					{
//						flag = 0;
//						printf("将四位数字从大到小排列：%d%d%d%d\n",a,b,c,d);
//						printf("将四位数字从小到大排列：%d%d%d%d\n",d,c,b,a);
//					}
//					else
//					{
//						flag = 0;
//						printf("将四位数字从大到小排列：%d%d%d%d\n", a, b, d, c);
//						printf("将四位数字从小到大排列：%d%d%d%d\n", c, d, b, a);
//					}
//				}
//					else
//					{
//						int b_0 = a;
//						b = c;
//						c = d;
//						d = b_0;
//					}
//				}
//		}
//		else
//		{
//			int a_0 = a;
//			a = b;
//			b = c;
//			c = d;
//			d = a_0;
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int x;
	printf("请输入4位正整数：");

	int y = scanf("%d", &x);

	// 判断输入是否合法
	if (y != 1 || x < 1000 || x > 9999)
	{
		printf("\n输入错误，请输入4位正整数。\n");
		return 1;
	}

	// 提取每一位
	int a = (x / 1000);
	x = x % 1000;
	int b = (x / 100);
	x = x % 100;
	int c = (x / 10);
	x = x % 10;
	int d = x;

	// 输出逆序
	int m = d * 1000 + c * 100 + b * 10 + a;
	printf("\n四位数逆序排列为：%d\n", m);

	// 将四位数字存入数组
	int num[4] = { a, b, c, d };

	// 冒泡排序从大到小
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 - i; j++)
		{
			if (num[j] < num[j + 1])
			{
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	printf("从大到小排列为：%d%d%d%d\n", num[0], num[1], num[2], num[3]);
	printf("从小到大排列为：%d%d%d%d\n", num[3], num[2], num[1], num[0]);

	return 0;
}