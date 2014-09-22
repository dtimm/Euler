/* https://projecteuler.net/problem=25
 * The Fibonacci sequence is defined by the recurrence relation:
 *
 * Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.
 * Hence the first 12 terms will be:
 *
 * F1 = 1
 * F2 = 1
 * F3 = 2
 * F4 = 3
 * F5 = 5
 * F6 = 8
 * F7 = 13
 * F8 = 21
 * F9 = 34
 * F10 = 55
 * F11 = 89
 * F12 = 144
 * The 12th term, F12, is the first term to contain three digits.
 *
 * What is the first term in the Fibonacci sequence to contain 1000 digits?
 *
 * David Timm 2014-09-22
 */

#define LENGTH 1000

#include <stdio.h>
#include <gmp.h>

int main(void)
{
  int count = 2;
  mpz_t value1, value2;
  mpz_init_set_str(value1, "1\0", 10);
  mpz_init_set_str(value2, "1\0", 10);

  while(mpz_sizeinbase(value2, 10) < 1000)
  {
    mpz_add(value1, value1, value2);
    mpz_add(value2, value1, value2);
    count += 2;
  }

  printf("%d\n", count);
}
