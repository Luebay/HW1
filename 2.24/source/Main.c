#include <stdio.h>
#include <stdlib.h>

int main(void)
{
START:
	int x;

	printf("請輸入數值");
	scanf("%d", &x);
	{
		if (x % 2)
			printf("%d is 奇數\n\n", x);
		else
			printf("%d is 偶數\n\n", x);
	}

	goto START;
	system("pause");
	return 0;
}