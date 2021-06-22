#include "holberton.c"
/**
 * main - prints alphabet
 *
 * Return - Always 0
 */

int main(void)
{
  print_alphabet_x10();
  return (0);
}

/**
 * print_alpabet_x10 - prints alphabets
 *
 * Return - Always 0
 */

void print_alphabet_x10(void)
{
  int i, j;

  for (j = 0; j < 10; j++)
    {
      i = 97;
      while (i <= 122)
	{
	  _putchar(i);
	  i++;
	}
    }
}
