#include <stdio.h>
#include <stdlib.h>

int main(void)
{
START:
	int x;

	printf("叫块计");
	scanf("%d", &x);
	{
		if (x % 2)
			printf("%d is 计\n\n", x);
		else
			printf("%d is 案计\n\n", x);
	}

	goto START;
	system("pause");
	return 0;
}