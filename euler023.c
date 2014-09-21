/* https://projecteuler.net/problem=23
 * A perfect number is a number for which the sum of its proper divisors is
 * exactly equal to the number. For example, the sum of the proper divisors of
 * 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.
 *
 * A number n is called deficient if the sum of its proper divisors is less than
 * n and it is called abundant if this sum exceeds n.
 *
 * As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest
 * number that can be written as the sum of two abundant numbers is 24. By
 * mathematical analysis, it can be shown that all integers greater than 28123
 * can be written as the sum of two abundant numbers. However, this upper limit
 * cannot be reduced any further by analysis even though it is known that the
 * greatest number that cannot be expressed as the sum of two abundant numbers
 * is less than this limit.
 *
 * Find the sum of all the positive integers which cannot be written as the sum
 * of two abundant numbers.
 *
 * David Timm 2014-09-21
 */

#include <stdio.h>

int factor_add(int);

int main(void)
{
  int i, j;
  int total = 0;
  int count = 0;
  int current;
  int abundant[24124];
  int matches[24124];
  matches[0] = 0;

  for(i=1;i<24124;i++)
  {
    if(i < factor_add(i))
    {
      abundant[count] = i;
      count++;
    }
    matches[i] = 1;
  }

  for(i=0;i<count;i++)
  {
    for(j=i;j<count;j++)
    {
      current = abundant[i] + abundant[j];
      if(current < 24124) matches[current] = 0;
    }
  }

  for(i=1;i<24124;i++)
  {
    total += matches[i] * i;
  }

  printf("%d\n", total);
}

int factor_add(int number)
{
  int i;
  int total = 1;
  for(i=2; i<(number/2 + 1); i++)
  {
    if(number%i == 0) total += i;
  }
  return total;
}
