#include <stdio.h>

int main()
{
	int m, n;
	if (scanf("%d %d", &n, &m) != EOF) {
		int array[n];
		for (int i = 0; i < n; ++i)
			scanf("%d", &array[i]);

		int shift = m % n;
		if (shift == 0) {
			for (int i = 0; i < n - 1; ++i)
				printf("%d ", array[i]);
			printf("%d\n", array[n-1]);
		} else {
			for (int i = n - shift; i < n; ++i)
				printf("%d ", array[i]);
			for (int i = 0; i < n - shift - 1; ++i)
				printf("%d ", array[i]);
			printf("%d\n", array[n - shift - 1]);
		}
	}

	return 0;
}