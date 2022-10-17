#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
int i, j;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 57; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 57 && j != 57 && k != 57)
{
putchar(',');
}
}
}
putchar('\n');
return (0);
}
