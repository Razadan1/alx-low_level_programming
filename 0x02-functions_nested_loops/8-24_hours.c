#include "main.h"

/**
 * jack_bauer - prints every minute of the day 00:00 - 23:59
 *
 * Return: return nothing
 */
void jack_bauer(void)
{
	int mins, hour;

	hour = 0;
	while (hour <= 23)
	{
		mins = 0;
		while (mins <= 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
			mins++;
		}
		hour++;
	}
}
