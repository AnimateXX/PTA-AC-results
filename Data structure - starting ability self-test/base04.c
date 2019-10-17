#include <stdio.h>

int main()
{
	int num[20];
	int orderIn[10] = { 0 };
	int orderOut[10] = { 0 };
	int cnt = 0;
	char c;

	while ((c = getchar()) != '\n') {
		if (c >= 48 && c <= 57) {
			int tmp = (int)(c - 48);
			num[cnt] = tmp;
			orderIn[tmp]++;
			cnt++;
		}
	}

	int carry = 0; // note carry bit.
	for (int i = cnt - 1; i >= 0; i--) {
		num[i] = num[i] * 2 + carry;
		if (num[i] > 9 && i != 0) {
			carry = 1;
			num[i] %= 10;
		} else
			carry = 0;
		if (num[0] <= 9)
			orderOut[num[i]]++;
	}

	int flag = 0;
	for (int i = 0; i < 10; i++) {
		if (orderIn[i] != orderOut[i]) {
			flag = 1;
			break;
		}
	}

	if (flag == 1)
		printf("No\n");
	else
		printf("Yes\n");

	for (int i = 0; i < cnt; i++)
		printf("%d", num[i]);

	printf("\n");

	return 0;
}