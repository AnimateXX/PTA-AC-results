#include <stdio.h>

int isPrime(int n) {
	if (n == 2 || n == 3) return 1;
	if ((n % 6) != 5 && (n % 6) != 1) return 0;

	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return 0;
	}
	return 1;
}

int main()
{
	int cnt = 0;
	int num, flag, front, behind;
	front = 3;
	behind = 0;

	scanf("%d", &num);

	for (int i = 5; i <= num; i += 2) {
		flag = isPrime(i);
		if (flag) behind = i;
		if (behind - front == 2) cnt++;
		if (flag) front = behind;
	}

	printf("%d\n", cnt);

	return 0;
}