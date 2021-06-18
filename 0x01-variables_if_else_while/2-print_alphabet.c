#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int num;
  num = 97;
  while (num <= 122)
    {
      putchar(num);
      num++;
    }
  putchar('\n');
  return (0);
}
