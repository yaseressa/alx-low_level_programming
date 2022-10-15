#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
* more headers goes there
* betty style doc for function main goes there 
*/
int main(void)
{
int rm, n;
srand(time(0));
n = rand() - RAND_MAX / 2;
rm =  n % 10;
/* your code goes there */
if (rm > 5)
{
printf("Last digit of %d is %d and is greater than 5\n",n,rm);
}
else if (rm == 0)
{
printf("Last digit of %d is %d and is 0\n",n,rm);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",n,rm);
}
return (0);

}
