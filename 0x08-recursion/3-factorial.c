#include "main.h"


/** 
* factorial - returns the factorial of a number
* @n: number to compute
*
* Return : returns factotial of n
*/

int factorial(int n)
{
    if (n == 1)
{

   return (1);

}
else 
return (n * factorial(n - 1));

return (n);
}

