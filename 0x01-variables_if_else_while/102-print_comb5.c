#include <stdio.h>
/**
 * main function
 */

int main(void)
{
  int i, x;
  x = 48;

  for (i = 48; i <= 57 ; i++)
    {
      putchar (x);
      putchar (i);

      if (i % 2 == 1 && (x + i) != 114)
	{
	  putchar (',');
	}

      putchar (32);
      if (i == 57 && x != 57)
	{
	  i = 47;
	  x += 1;
	}
    }
  putchar ('\n');
  return (0);
}
