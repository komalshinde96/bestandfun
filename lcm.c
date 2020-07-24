#include<stdio.h>
int lcm(int, int);
int main()
{
	int a, b, answer;
	int prime[200];
	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);
	answer = lcm(a, b);
	printf("LCM of %d and %d is %d\n", a, b, answer);
	return 0;
}
int lcm(int a, int b)
{
	static int common = 1;
	if (common % a == 0 && common % b == 0)
	{
		return common;
	}
	common++;
	lcm(a, b);
	return common;
}
