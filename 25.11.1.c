

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",arr[7]);
//	printf("%d\n",arr[3]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i=0; i<10; i++)
//	{
//		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10];
//		printf("%d\n", sizeof(arr));
//		printf("%d\n",sizeof(arr[0]));
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		printf("%d\n",sz);
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//	printf("%d\n",arr[2][2]);
//	return 0;
//}

//int main()
//{
//	int arr[3][5];
//		int i = 0;
//
//		for (i = 0; i < 3; i++)
//		{
//			int j = 0;
//			for (j = 0; j < 5; j++)
//			{
//				scanf("%d",&arr[i][j]);
//			}
//		}
//
//		for (i = 0; i < 3; i++)
//		{
//			int j = 0;
//			for (j = 0; j < 5; j++)
//			{
//				printf("%d - ", arr[i][j]);
//			}
//			printf("\n-------------------\n");
//		}
//		for (i = 0; i < 3; i++)
//		{
//			int j = 0;
//			for (j = 0; j < 5; j++)
//			{
//				printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//			}
//		}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <wchar.h>
#include <locale.h>
#include<time.h>
#include<windows.h>

int main()
{
	char arr6[] = " ";
	char arr1[] = "HAPPY Halloween!";
	char arr5[] = "****************";
	const wchar_t* arr2 = L"   ¨༺ ♱✮♱ ༻¨   ";
	const wchar_t* arr3 = L"   ⋆༺𓆩 ☠︎  𓆪༻⋆";
	const wchar_t* arr4 = L"·̩͙ ₊ ᨦ Tʀɪᴄᴋ ᴏʀ ᴛʀᴇᴀᴛ ᨩ ໋₊ ·̩͙";

	int left = 0;
	int right = strlen(arr5) - 1;
	int flag = 1;

    const wchar_t* arr11 = L"    ⠀⠀⢰⣿⣿⣿⣿⡆ ⣠⣶⣿⣶⡀";
    const wchar_t* arr12 = L"⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿";
    const wchar_t* arr13 = L"⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏";
    const wchar_t* arr14 = L"⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⠋";
    const wchar_t* arr15 = L"⠀⠀⠀⠀⣾⣿⣿⣧⠀⠻⣿⣿⠿⠉";
    const wchar_t* arr16 = L" ⣰⣿⣿⣿⣿⣿⣿⣿";
    const wchar_t* arr17 = L" ⠸⣿⣿⣿⣿⣿⣿⠏";
    const wchar_t* arr18 = L"⠀⠈⠛⠿⣿⣿⡟";

	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, ".UTF8");

    while (left <= right)
    {
        // 1️⃣ 打印闪烁符号
        if (flag == 1)
            wprintf(L"%ls\n", arr2);
        else
            wprintf(L"%ls\n", arr3);

        // 2️⃣ 打印当前状态的文字
        printf("%s\n", arr5);

        // 3️⃣ 更新arr5的内容
        arr5[left] = arr1[left];
        arr5[right] = arr1[right];

        // 4️⃣ 控制闪烁切换
        flag = !flag;

        // 5️⃣ 等待一点时间后清屏
        Sleep(400);
        system("cls");

        // 6️⃣ 移动左右指针
        left++;
        right--;
    }
    printf("To Li:\n");
    Sleep(500);
    wprintf(L"   %ls\n", arr2);
	printf("   %s\n", arr5);
    wprintf(L"%ls\n", arr4);
    const wchar_t* arrs[] = { arr11, arr12, arr13, arr14, arr15, arr16, arr17, arr18 };
    int n = sizeof(arrs) / sizeof(arrs[0]);

    for (int i = 0; i < n; i++)
    {
        wprintf(L"%ls\n", arrs[i]);
        Sleep(300);
    }
	return 0;
}