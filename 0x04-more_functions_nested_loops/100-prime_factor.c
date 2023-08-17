#include <stdio.h>
/**
 * main - check code
 * Return: zero (always success)
 */
int main(void)
{
	long num = 612852475143;

	int check;

	while (check++ < (num / 2))
	{
		if (num % 2 == 0)
		{
			num = num / 2;
			continue;
		}
		for (check = 3; check < (num / 2); check += 2)
		{
			if (num % check == 0)
				num = num / check;
		}
	}
	printf("%ld\n", num);
	return (0);
}
