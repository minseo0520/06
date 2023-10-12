#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r)
{
	int div1, div2;
	
	div1 = factorial(n); //n!
	div2 = factorial(n-r)*factorial(r); //(n-r)!n!
	
	//분모, 분자 나누기 연산
	return (div1/div2); 
}

int factorial(int n)
{
	int res = 1;
	int i;
	for(i=1; i<=n; i++)
	 res=res*i;
	return res;
}

int main(void)
{
	//1. 입력값 받음
	int n, r;
	int div1, div2; //div1-분자, div2-분모 
	int result;
	
	printf("input n:");
	scanf("%d", &n);
	printf("input r:");
	scanf("%d", &r); 
	
	//2. 분모/분자 계산
	result = combination(n, r);
	
	//3. 최종값 출력 
	printf("result : %i\n", result);
}




