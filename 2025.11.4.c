//int main()
//{
//
//	int x=0, y=0,a=0,b=0,c=0;
//		int m = 3 < x < 5 || y>3 && y < 2;
//		int m2 = -10 < a < -5 && b == c;
//		int m3 = 5 > 3 && 2||8 < 4 - !0;
//		int m4 = !4 < y < 5 && 5 < b < 6;
//		int m5 = !x || x != 0;
//		int m6 = !x && x != 0;
//		printf("%d%d%d%d%d%d",m,m2,m3,m4,m5,m6);
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1  
//#include<stdio.h>  
//#include<math.h>  
//
//#define π 3.14159265358979323846 // 定义 π 的值  
//
//#define _CRT_SECURE_NO_WARNINGS 1  
//#include<stdio.h>  
//#include<math.h>  
//
//#define π 3.14159265358979323846 // 定义 π 的值  
//
//int main()  
//{  
//    int x, y, a, b, m, n, r, R;  
//
//    x % 2 == 0 && y % 2 != 0;  
//
//    a % 2 == 0 && b % 2 == 0 || a % 2 != 0 && b % 2 != 0;  
//
//    (!a || !b) && a + b;  
//
//    x > 10 && x < 100 || x < 0 && x != -2.0;  
//
//    (1.0) / (sqrt(2 * π)) * exp(-(pow(x, 2) / 2.0));
//
//    x * x + y * y >= r * r && x * x + y * y <= R * R;
//    
//    m % 5 == 0 && m % 7 == 0 && m / 35;
//
//    int p, q;
//
//    m % p == 0 && n % p == 0 && m % q && n % q;
//
//    (x * y + (x + y) / (4.0 * a)) / (2.0);
//
//    sin(x * x + y * y) * cos(x + y) * (1.0 / 3.0);
//
//    return 0;  
//}

//#define PQ 4.5
//#define ABC(x) PQ + (x * x)
//#include<stdio.h>
//
//int main()
//{
//	int a = 3, b, c, d;
//	b = ABC(a);
//	c = ABC(a + 1);
//	d = 2.0 * ABC(a);
//	printf("b = %d, c = %d, d = %d\n",b, c, d);
//	return 0;
//}
//#define PQ 4.5
//#define ABC(x) (PQ + (x) * (x))
//#include<stdio.h>
//
//int main()
//{
//	int a = 3, b, c, d;
//	b = ABC(a);
//	c = ABC(a + 1);
//	d = 2.0 * ABC(a);
//	printf("b = %d, c = %d, d = %d\n", b, c, d);
//	return 0;
//}

#include<stdio.h>
#include<math.h>

#define M_PI 3.14159265358979323846 // 定义 π 的值 

int main()
{
	int a = 1;
	int a0, a1, a2, a3, a4, a5, a6, a7;  // 用于存放二进制位
	while (1)
	{
		printf("==*十进制正整数与八位二进制数转换*==\n");
		printf("  (若无转化需求，输入0退出程序)^^\n");

		printf("请输入小于256的正整数：");
	
		scanf("%d", &a);
		if (a < 0 || a > 255)
		{
			printf("输入错误！请输入 0~255 之间的整数。\n");
		}
		else if (a == 0)
		{
			break;
		}
		else
		{
			int n = a;
			a0 = a % 2; a /= 2;
			a1 = a % 2; a /= 2;
			a2 = a % 2; a /= 2;
			a3 = a % 2; a /= 2;
			a4 = a % 2; a /= 2;
			a5 = a % 2; a /= 2;
			a6 = a % 2; a /= 2;
			a7 = a % 2;
			printf("%d--->%2d%2d%2d%2d%2d%2d%2d%2d\n\n",n,a7,a6,a5,a4,a3,a2,a1,a0);
		}
	}
	return 0;
}

//int main()
//{
//	double r, h, s, ssum, v;
//
//	printf("此次计算单位为cm\n");
//	printf("请依次输入圆柱的半径(r)和高(h)：");
//	scanf("%lf %lf", &r, &h);
//
//	s = 2.0 * M_PI * r * h;
//	ssum = s + 2.0 * M_PI * r * r;
//	v = M_PI * r * r * h;
//
//	printf("\nce mian ji (lateral area) = %.4lf cm^2\n", s);
//	printf("zong mian ji (total area) = %.4lf cm^2\n", ssum);
//	printf("ti ji (volume) = %.4lf cm^3\n", v);
//
//	return 0;
//
//}

