#include "holberton.h"
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main(void)
{
  print_alphabet();
  return (0);
}

/**
 * print_alphabet - 
 * 
 * Return - Always 0
 */

void print_alphabet(void)
{
  int i;
  i = 97;
  while (i <= 122)
    {
      _putchar(i);
      i++;
    }
  _putchar('\n');
}
