#include <stdio.h>
int main(void)
{
	int age;
	printf("年齢を入力してください > ");
	scanf("%d", &age);
	if ( age == 2 || age == 4)
	{
		printf("接種の対象です。\n");
	}
	return 0;
}