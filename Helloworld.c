#define _CRT_SECURE_NO_WARNINGS 1
//�������ݷ��ڴ����һ�У�Ϊʲô��һ�ж�Ҫ#����Щ������ʲô��˼��
//#include<stdio.h>//ͷ�ļ���head

//�����main��ʼִ��
//��ݼ�ctrl+f5��ִ�г��򣬱������
//int main()
//{
//	printf("Helloworld!");	//���ڸ�ʽ�������Ļ
//	return 0;//���ڱ�ʾ�˳�����
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
//	printf("С�룡\n");
//	printf("С�뵹��^^\n");
//	printf("%d\n", 100);//%d��ռλ������ʾ��ӡһ�����������������һ��һ���ַ�
//	printf("%d\n", (int)sizeof(char)); // �޸����󣬽�sizeof���ǿ��ת��Ϊint
//	printf("%d\n", (int)sizeof(short)); // �޸����󣬽�sizeof���ǿ��ת��Ϊint
//	printf("%d\n", sizeof(int)); // �޸����󣬽�sizeof���ǿ��ת��Ϊint
//	printf("%d\n", (int)sizeof(long)); // �޸����󣬽�sizeof���ǿ��ת��Ϊint
//	printf("%d\n", (int)sizeof(long long)); // �޸����󣬽�sizeof���ǿ��ת��Ϊint
//	printf("%d\n", (int)sizeof(float)); // �޸����󣬽�sizeof���ǿ��ת��Ϊint
//	printf("%d\n", (int)sizeof(double)); // �޸����󣬽�sizeof���ǿ��ת��Ϊint
//
//	//sizeof��һ�����������ʾ����һ���������͵Ĵ�С(��һ���ؼ��֣�
//	return 0;
//}

#include<stdio.h>

//int main()
//{
//	//����һ������
//	//���� ���������� = ��ʼֵ��
//	int age = 20;
//	double weight = 57.3;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n",weight);
//	//%d������� %f��Ը����� %lf��Է���˫���ȸ�����
//	return 0;
//}

//int a = 5;
////ȫ�ֱ������������������ļ����ڴ���������
//int main()
//{
//	//�������ڲ��ı����������ֲ�����
//	//���ֲ�������ȫ�ֱ���ͬ��ʱ���ֲ�����
//	//�������ȫ�ֱ����;ֲ�����д����ͬ
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//дһ�����������������ĺ�

//int main()
//{
//	int a = 3;
//	int b = 7;
//	printf("%d\n", a + b);
//	return 0;
//}

//�Ҳ²�������������дֻ�����һ���̶���ֵ���޷����û�����
//������ʦ˵�����ǿ��Ե��ɼӷ��������ģ�

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
//���������������������