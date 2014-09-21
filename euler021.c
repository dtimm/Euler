/* https://projecteuler.net/problem=21
 * Let d(n) be defined as the sum of proper divisors of n (numbers less than n
 * which divide evenly into n).
 * If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and
 * each of a and b are called amicable numbers.
 *
 * For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44,
 * 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4,
 * 71 and 142; so d(284) = 220.
 *
 * Evaluate the sum of all the amicable numbers under 10000.
 *
 * David Timm 2014-09-17
 */

#include <stdio.h>

int factor_add(int);

int main(void)
{
  int i;
  int total = 0;
  int current;

  for(i = 3; i <= 10000; i++)
  {
    current = factor_add(i);
    if(i == factor_add(current) && i != current)
    {
      printf("%d %d\n", current, i);
      total += i;
    }
  }

  printf("Total: %d\n", total);
}

int factor_add(int number)
{
  int i;
  int total = 0;
  for(i=1; i<(number/2 + 1); i++)
  {
    if(number%i == 0) total += i;
  }
  return total;
}
