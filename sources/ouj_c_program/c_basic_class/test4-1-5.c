#include <stdio.h>
int main(void)
{
	int i = -1;
	if (i + 1)
	{
		i = i + 1;
	}
	else
	{
		i = i - 1;
	}
	printf("%d\n", i);
	return 0;
}