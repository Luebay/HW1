#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y, z, i, sum = 0;
	printf("�п�J�T�Ӿ��:");
    scanf("%d %d %d", &x, &y, &z);
	for (i = 0; i < 3; i++)
	{
		if (x > y) {
			sum = x;
			x = y;
			y = sum;
		}
		if (y > z) {
			sum = y;
			y = z;
			z = sum;
		}
	}
	printf("�̤j��:%d\n", z);
	printf("�̤p��:%d\n", x);

	system("pause");
	return 0;
}