#include<stdio.h>
#include<stdlib.h>
int km, money, av, park, pass, total;
int main(void)
{

	printf("一整天的總里程數:"); scanf_s("%d", &km);
	printf("汽油一公升多少錢:"); scanf_s("%d", &money);
	printf("平均一公升能行駛多少公里:"); scanf_s("%d", &av);
	printf("一天的停車費:"); scanf_s("%d", &park);
	printf("一天的通行費(過路費):"); scanf_s("%d", &pass);
	total = km / av * money + park + pass;
	printf("一天大約花費:%d", total);
	system("pause");
	return 0;
}