#include "main.h"
/**
 *_isalpha - Entry point.
 *Return:0 if no error, non-zero value if error.
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return(0);
}
