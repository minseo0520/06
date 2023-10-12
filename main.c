#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	int c = a+b;
	return c;
}

int square(int n)
{
	return n*n;
}

get_max(int x, int y)
{
	if(x>y)
	return x;
	else
	return y;
}

int main(void)
{
	int a, b;
	int n;
	int x, y;
	
	a=3;
	b=10;
	printf("sumTwo result : %i\n", sumTwo(a, b));
	
	n=4;
	printf("square result : %i\n", square(n));
	
	x=4;
	y=7;
	printf("get_max result : %d\n", get_max(x, y));
}

