#include <stdio.h>
#include <stdlib.h>

int main(void)
{
START:
	int x;

	printf("�п�J�ƭ�");
	scanf("%d", &x);
	{
		if (x % 2)
			printf("%d is �_��\n\n", x);
		else
			printf("%d is ����\n\n", x);
	}

	goto START;
	system("pause");
	return 0;
}