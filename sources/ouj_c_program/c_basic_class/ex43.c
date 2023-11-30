#include <stdio.h>
int main(void)
{
	int i = 100;
	/* 1から100のうち、3の倍数または5の倍数である数を表示する */
	while (1)
	{
		/* 3より小さくなったら終了する */
		if (i < 3)
		{
			break;
		}
		/* 3または5の倍数なら表示する */
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d ", i);
		}
         --i;
	}
	printf("\n");
	return 0;
}