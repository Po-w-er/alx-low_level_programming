#include "main.h"

void print_rev(char *s)
{
int i = 0;
int j;
int d;
do {
if (*s != '\0')
{
i++;
}
d = i;
} while (*(s + i) != '\0');

for(j = (d- 1);j >= 0; j--)
{
_putchar(*(s+j));
}
_putchar('\n');
}