#include"main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
*/

void print_triangle(int size)
{
	int hight, wid;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hight = 1; hight <= size; ++hight)
		{
			for (wid = 1; wid <= size; ++wid)
			{
				if ((hight + wid) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
