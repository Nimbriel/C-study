#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//���飬��ͬԪ�صļ���
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//	//���飬��һ��Ԫ�ص��±�Ϊ0����arr[0]��ʾ
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//������
//������������+-*/%
//��λ��������>> <<
//int main()
//{
//	//�������������������������������Ҳ������
//	float a = 9.0 / 2;
//	printf("%f\n", a);
//	int b = 9 % 2;//ȡ����
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;//���Ʋ���������a�Ķ�����λ�����ƶ�1λ���൱�ڳ���2.
//	//&��λ��  |��λ��  ^��λ���
//	printf("%d\n", b);
//	a = a + 5;//a += 5
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	//0��ʾ�٣����0��ʾ��
	int a = 10;
	printf("%d\n", !a);
	int b = 0;
	printf("%d\n", !b);//��ʱ��1ͳһ��ʾ��
	//����ʱ�����������Ĳ���
	//if (a)���aΪ�棬����
	//{
	//}
	//if (!a)���aΪ�٣�����
	//{
	//}
	a = -5;
	printf("%d\n", a);
	//sizeof���������������͵Ĵ�С,��������ſ���ʡ�ԣ�˵��sizeof��һ�����������Ǻ���
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(a));
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//�������������ܴ�С����λ���ֽ�
	printf("����λ�������͵Ĵ�С=%zu\n", sizeof(arr[3]));
	int num = sizeof(arr) / sizeof(arr[0]);
		printf("�������=%d\n", num);
	return 0;


}