#include "math_functions.h"

int addition(int a, int b)
{
	return a + b;
}

int subtraction(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}

int exponentiation(int a, int b)
{
	int res = a;
	for (int i = 1; i < b; i++)
	{
		res = res * a;
	}
	return res;
}