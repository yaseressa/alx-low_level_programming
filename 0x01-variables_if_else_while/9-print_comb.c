#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
