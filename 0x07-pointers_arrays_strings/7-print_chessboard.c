#include "main.h"

/*8
 * print_chessboard - Entry point
 * @s: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i  < 8; i++)
	{
		for (n = 0; n < 8; n++)
		_putchar(a[i][n]);
		_putchar('\n');
	}
}
