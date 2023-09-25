#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int calculate (int a,char symbol, int b)
{
	if (symbol == '+')
	{
		return a + b;

	}
	else
	{
		if (symbol == '-')
		{
			return a - b;
		}
		else
		{
			if (symbol == '*')

				return a * b;
			else
				return a / b;
		}
	}
}
/*∂®“Â‘ÀÀ„*/
int main()
{
	int a;
	int b;
	char symbol;
	scanf("%d%c%d", &a, &symbol, &b);
	int out = calculate(a, symbol, b);
	printf("%d", out);
	return 0;

}