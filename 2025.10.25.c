#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void gameii()
{

	int rii = rand() % 100 + 1;
	int guessii = 0;
	int countii = 5;
	while (countii)
	{
		printf("您目前共有%d次机会^-^\n", countii);
		printf("请猜数字^^>:");
		scanf("%d", &guessii);
		if (guessii < rii)
		{
			printf("猜小了\n");
		}
		else if (guessii > rii)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！*^\\/^*\n");
			break;
		}
		countii--;
	}
	if (countii == 0)
	{
		printf("很遗憾，您的机会用完喽^^游戏结束·-·\n");
		printf("数字为%d\n", rii);
	}
}
void gamei()
{

	int r = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("请猜数字^^>:");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！*^\\/^*\n");
			break;
		}
	}
}

void menu()
{
	printf("*************************\n");
	printf("*****   2.Dpaly    ******\n");
	printf("*****   1.Epaly    ******\n");
	printf("*****   0.exit     ******\n");
	printf("*************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 2:
			gameii();
			break;
		case 1:
			gamei();
			break;
		case 0:
			printf("游戏结束，感谢体验\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
		return 0;

}