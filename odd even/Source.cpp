#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if (x > 0)
	{
		if (x % 2 == 0)
		{
			printf("Positive even");
		}
		else
		{
			printf("Positive odd");
		}

	}
	else if (x == 0)
	{
		printf("Zero");
	}
	else
	{
		if (x % 2 == 0)
		{
			printf("Negative even");
		}
		else
		{
			printf("Negative odd");
		}
	}
}