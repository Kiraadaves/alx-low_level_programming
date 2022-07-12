#include "main.h"
#include <string.h>

/**
 * puts2 - returnsstring characters followed by a new line
 * @str: function parameter
 */
void puts2(char *str)
{
	int x, y;

	x = strlen(str);
	for (y = 0; y < x; y += 2)
		_putchar(str[y]);
	_putchar('\n');
}
