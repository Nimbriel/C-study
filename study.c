#define _CRT_SECURE_NO_WARNINGS 1
//ע�����������ʹ����

#include<stdio.h>;

int main()
{
	int input = 0;//����ֵ
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��1/0)?>:");
	scanf("%d", &input);
	if (input == 1)
		printf("��offer\n");
	else
		printf("������\n");
	return 0;
}