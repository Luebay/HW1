#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("    *      \n");
	printf("   ***     \n");
	printf("  *****    \n");
	printf(" *******   \n");
	printf("*********  \n");

	int x;
	for (x = 0; x < 5; x++)
	{
		int y, z;
		for (y = 5 - 1 - x; y > 0; y--)
			printf(" ");
		for (z = 0; z < 2 * x + 1; z++)
			printf("*");
		printf("\n");
	}

	system("pause");
	return 0;
}