#include <stdio.h>
/**
 * main function
 */
int main(void)
{
  int x;

  x = 97;
  while (x <= 122)
    {
      putchar (x);
      x++;
    }
  x = 65;
    while (x <= 90)
      {
       putchar (x);
       x++;
      }
  putchar ('\n');
  return (0);
}
