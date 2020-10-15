#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
	int i, x, y;
	printf("number   square   cube");
	for (i = 0; i < 11; i++)
	{
		x = i * i;
		y = i * i * i;
		printf("\n%d        %d        %d", i, x, y);
	}

	system("pause");
	return 0;


}