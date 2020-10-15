#include <stdio.h>
#include <stdlib.h> 
float x, y, bmi;
int main(void)
{

	printf("請輸入身高(m) 體重(kg):");
	scanf("%f %f", &x, &y);
	bmi = y / (x * x);

	if (bmi < 18.5)printf("BMI is %f , underweight", bmi);
	if (bmi >= 18.5 && bmi < 24.9)printf("BMI is %f , normal", bmi);
	if (bmi >= 24.9 && bmi < 29.9)printf("BMI is %f , overweight", bmi);
	if (bmi >= 29.9)printf("BMI is %f , obese", bmi);

	system("pause");
	return 0;
}