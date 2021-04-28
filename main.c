#include "Includes.h"

int div(int a, int b)
{
	return a/b;
}

int mul(int a, int b)
{
	return a*b;
}


int sub(int a, int b)
{
	return a-b;
}


int add(int a, int b)
{
	return a+b;
}

int main()
{
	int num1 = 5;
	int num2 = 10;
	int sum = add(num1, num2);
	int dif = sub(num2, num1);
	int qnt = div(num1, num2);
	int pro = mul(num1, num2);
	printf("sum = %i\n", sum);
	printf("dif = %i\n", dif);
	printf("qnt = %i\n", div);
	printf("pro = %i\n", mul);

	return 0;
}
