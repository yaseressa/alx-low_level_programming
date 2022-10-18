#include "main.h"
/**
 *main-program entry point.
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
int j;
for (j = 0; j < 10; j++)
{
int i;
for (i = 97; i <= 127; i++)
{
_putchar(i);
}
}
_putchar('\n');
return (0);
}
