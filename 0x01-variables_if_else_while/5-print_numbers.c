#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
char i;
for (i = '0'; i < '10'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
