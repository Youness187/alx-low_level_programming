#include "main.h"
/**
 * jack_bauer - prints 24hrs time
 */
void jack_bauer(void)
{
for (int i = 0; i < 24; i++)
{
for (int j = 0; j < 60; j++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':');
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
_putchar('\n');
}

}

}
