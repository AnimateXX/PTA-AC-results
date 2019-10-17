#include <stdio.h>

#define ABS(x) ((x) > 0 ? (x) : (-(x)))

int main()
{
	int num, an;
	char c;
	int order = 0;

	scanf("%d %c", &num, &c);
	
	while ((2 * order * order - 1) <= num) {
		order++;
	}

	order--;

	for (int i = 0; i < 2 * order - 1; i++) {
		an = ABS(order - 1 - i) * 2 + 1;

		for (int j = 0; j < order - 1 - ABS(order - 1 - i); j++) {
			putchar(' ');
		}

		for (int j = 0; j < an; j++) {
			putchar(c);
		}

		printf("\n");
	}
	printf("%d\n", num - 2 * order * order + 1);

	return 0;
}

