#include <stdio.h>

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

/*

while(condition expression){
	body
	of
	loop
}
continue here

*/

int main()
{
	int arr[40][30];

	int y = 0;
	while(y < 30){
		int x = 0;
		while(x < 40){
			arr[x][y] = y*30+x;
			printf("arr[%i][%i] = %i\n", x, y,  arr[x][y]);
			x = x+1;
		}
		y = y+1;
	}
	return 0;
}
