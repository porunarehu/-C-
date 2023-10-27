#include<stdio.h>
int main(void)
{
	int a, b, surplus, result;

	printf("1つ目の数字を入力してください:");
	scanf_s("%d", &a);
	printf("2つ目の数字を入力してください:");
	scanf_s("%d", &b);

	surplus = a % b;
	
	if (surplus == 0)

	{
		result = a / b;
		printf("%d / %d = %d\n", a, b, result);

	}

	return 0;


}


#include<stdio.h>
int main(void)
{
	int a;

	printf("入力データは?>>>");
	scanf_s("%d", &a);
	printf("データは");//--->必ず表示される
	

	if (a % 2 == 0)
	{
		printf("偶数"); //---> 入力データが偶数の場合に表示されます
	}
	
	else
	{
		printf("奇数"); //> 入力データが奇数の場合に表示されます

	}

	printf("です\n");//--->必ず表示されます


	return 0;