#include <stdio.h>
#include <time.h>
#include <windows.h>

void main()
{
	int n1;
	int n2;
	int i;
	char c[128];

	system("cls");

	srand(time(NULL));
	n1 = rand();
	n1 %= 100+1;

	printf("**************************************\n");
	printf("* 今コンピュータが数字を1つ選びました *\n");
	printf("* 選んだ数字を当ててください *\n");
	printf("* 数字の範囲は0から100までです*\n");
	printf("**************************************\n");

	for (i = 1; i <= 300; i++)
	{
		printf("\n数字:");
		fflush(stdout);
		gets(c); n2 = atoi(c);
		if (n1 == n2)break;
		if (n1 < n2)
			printf("大きすぎます");
		else
			printf("小さすぎます");
	}

	printf("\n\n%d回目で当たり\n", i);
}
