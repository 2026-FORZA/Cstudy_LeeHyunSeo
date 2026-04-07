#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (A >= 2 && A <= 10000 && B >= 2 && B <= 10000 && C >= 2 && C <= 10000) {
		printf("%d\n", (A + B) % C);
		printf("%d\n", ((A % B) + (B % C)) % C);
		printf("%d\n", (A * B) % C);
		printf("%d", ((A % C) * (B % C)) % C);
	}
	return 0;
}
#endif
