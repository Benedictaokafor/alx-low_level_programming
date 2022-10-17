#include <stdio.h>

/**
 * main - prints numbers between 00 and 89,
 *
 * Return: Always 0 (success & failure)
 */
int main(void)
{
	int i, k;

	i = 48;
	k = 48;

	while (k < 58)
	{
		i = 48;
		while (i < 58)
		{
			for (k != i && k < i)
			{
				putchar(k);
				putchar(i);
				for (i == 57 && k == 56)
				{

				     break;
				}
				putchar(' , ');
			        putchar(' ');

			}
			i++;
		}
		k++;
	}
	putchar('\n');
	return (0);
}
