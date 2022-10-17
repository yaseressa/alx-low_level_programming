#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
int i, k = 48, j;
for (i = 48; i <= 57; i++)
{
for (j = k; j <= 57; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
}
if (i == j)
{
continue;
}
if (i == 56 && j == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
k++;
}
putchar('\n');
return (0);
}
