#include "main.h"
#include <stdio.h>
#include <string.h>

/* Write a function that prints a string, followed by a new line.
*
* return 0: success
*
*
*/
void _puts_recursion(const char *s);

int main(void)
{char s[50] = {"Puts with recursion"};
 gets(s);
 _puts_recursion(s);

  return 0;
}void _puts_recursion( const char *s)
{
 if(*s != 0){
   printf("%c",*s);
   _putchar(*s);

  _puts_recursion(s++);

   } else _putchar('\n');

}
