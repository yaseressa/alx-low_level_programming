#include "main.h"
/**
 *main-program entry point.
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
int i;
char s[] = "_putchar";
for (i = 0; i <= 7; i++)
{
_putchar(s[i]);
}
_putchar('\n');
return (0);
}
