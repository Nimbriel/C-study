#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ת���ַ�=ת��ԭ������˼
int main()
{
    //������%d+���֣���ĸ��%+����ĸ�����ַ�����%s+���ַ�����
    printf("%c\n", 'a');
    printf("\a");
    printf("%c\n", '\130');//�˽��Ƶ�130������1*8^2+3*8^1+0*8^0=88(ʮ����)����X��ASCII����88
    printf("%d\n", 'A');//A=65��ʮ���ƣ�=�˽���101
    printf("%d\n", '\101');
    return 0;
}