#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
START:
	int a, b, result;
	printf("�п�J����P��:");
	scanf("%d %d", &a, &b);
	result = pow(b, a);
	printf("%d��%d���� = %d\n\n", b, a, result);

	goto START;
	system("pause");
	return 0;
}