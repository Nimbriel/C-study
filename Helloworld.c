#define _CRT_SECURE_NO_WARNINGS 1
//以上内容放在代码第一行（为什么第一行都要#，这些语言是什么意思）
//#include<stdio.h>//头文件，head

//代码从main开始执行
//快捷键ctrl+f5，执行程序，编译程序
//int main()
//{
//	printf("Helloworld!");	//用于格式化输出屏幕
//	return 0;//用于表示退出程序
//}
//
//int main()
//{
//	char sa = 'a';
//	int age = 20;
//	short num = 10;
//	float weight = 55.5;
//	double d = 0.0;
//}

//int main()
//{
//	printf("小齐！\n");
//	printf("小齐倒茶^^\n");
//	printf("%d\n", 100);//%d是占位符，表示打印一个整数，否则会理解成一个一个字符
//	printf("%d\n", (int)sizeof(char)); // 修复错误，将sizeof结果强制转换为int
//	printf("%d\n", (int)sizeof(short)); // 修复错误，将sizeof结果强制转换为int
//	printf("%d\n", sizeof(int)); // 修复错误，将sizeof结果强制转换为int
//	printf("%d\n", (int)sizeof(long)); // 修复错误，将sizeof结果强制转换为int
//	printf("%d\n", (int)sizeof(long long)); // 修复错误，将sizeof结果强制转换为int
//	printf("%d\n", (int)sizeof(float)); // 修复错误，将sizeof结果强制转换为int
//	printf("%d\n", (int)sizeof(double)); // 修复错误，将sizeof结果强制转换为int
//
//	//sizeof是一个运算符，表示计算一个数据类型的大小(是一个关键字）
//	return 0;
//}

#include<stdio.h>

//int main()
//{
//	//创建一个变量
//	//类型 变量的名字 = 初始值；
//	int age = 20;
//	double weight = 57.3;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n",weight);
//	//%d针对整形 %f针对浮点型 %lf针对发、双精度浮点型
//	return 0;
//}

//int a = 5;
////全局变量，作用域是整个文件，在大括号外面
//int main()
//{
//	//大括号内部的变量都称作局部变量
//	//当局部变量和全局变量同名时，局部优先
//	//不建议把全局变量和局部变量写作相同
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//写一个代码求两个整数的和

//int main()
//{
//	int a = 3;
//	int b = 7;
//	printf("%d\n", a + b);
//	return 0;
//}

//我猜测像我上面这样写只能求出一个固定的值，无法让用户输入
//下面老师说的这是可以当成加法计算器的？

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);
	return 0;
}
//变量的作用域和生命周期