#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i)
}
putchar('\n');
return (0);
}
