#include "main.h"
/**
 *_islower - Entry point.
 *Return:0 if no error, non-zero value if error.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return(0);
}
