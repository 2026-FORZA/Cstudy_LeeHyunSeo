#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i, j;
	i = 1;

	scanf("%d", &n);

	while (i <= n)
	{
		j = 1;
		while (j <= n)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
#endif
