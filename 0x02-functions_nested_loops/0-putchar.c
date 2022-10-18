#include <unistd.h>
/**
 *main-program entry point.
 *Return:0 if no error, non-zero value if error.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
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
