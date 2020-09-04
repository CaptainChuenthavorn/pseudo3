#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 1;i <= (2 * n) - 1;i++) 
	{
		for (j = 1;j <= 2 * n - 1;j++)
		{
			if (j <= n - abs(n - i) || j >=	n + abs(n - i))
			{
			printf("* ");
			}
		printf("  ");
		}
		printf("\n");
	}
	return 0;
}