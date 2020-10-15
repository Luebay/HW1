#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
START:
	int a, b, result;
	printf("請輸入次方與數:");
	scanf("%d %d", &a, &b);
	result = pow(b, a);
	printf("%d之%d次方 = %d\n\n", b, a, result);

	goto START;
	system("pause");
	return 0;
}