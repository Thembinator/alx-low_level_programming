#include "main.h"

/**
 * jack_bauer - function that  prints every minute of the day of Jack bauer.
 * n from  00:00 to 23:59, min loop count mins, while hour loop counts hours.
 * Reset mins
 * Return: 0.
 */
void jack_bauer(void)
{
	int hours = 0;
	int minute = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
{
	while (minute <= 59)
{
	mins_remainder = minute % 10;
	hours_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(minute / 10 + '0');
	_putchar(mins_remainder + '0');
	minute++;
	_putchar('\n');
}
	hours++;
	minute = 0;
}
}
