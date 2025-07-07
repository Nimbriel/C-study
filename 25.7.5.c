#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//转义字符=转变原来的意思
int main()
{
    //数字是%d+数字，字母是%+’字母’，字符串是%s+“字符串”
    printf("%c\n", 'a');
    printf("\a");
    printf("%c\n", '\130');//八进制的130，等于1*8^2+3*8^1+0*8^0=88(十进制)，而X的ASCII码是88
    printf("%d\n", 'A');//A=65（十进制）=八进制101
    printf("%d\n", '\101');
    return 0;
}