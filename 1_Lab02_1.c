#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);

	if (A >= 1 && A <= 10000 && B >= 1 && B <= 10000) {
		printf("%d\n", A + B);
		printf("%d\n", A - B);
		printf("%d\n", A * B);
		printf("%d\n", A / B);
		printf("%d", A % B);
	}
	
	return 0;
}
#endif
