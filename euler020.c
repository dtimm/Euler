/* https://projecteuler.net/problem=20
 * n! means n × (n − 1) × ... × 3 × 2 × 1
 *
 * For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
 * and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
 *
 * Find the sum of the digits in the number 100!
 *
 * David Timm 2014-09-17
 */

#include <stdio.h>
#include <gmp.h>

int main(void)
{
  char * strvalue;
  int i;
  int total = 0;
  mpz_t value;
  mpz_init_set_str(value, "0", 10);
  mpz_fac_ui(value, 100);

  strvalue = mpz_get_str(NULL, 10, value);

  for(i = 0;i<512;i++)
  {
    if((char)strvalue[i] == '\0') break;
    total += (int)strvalue[i]-48;
  }

  printf("%s\nSum of digits: %d\n", strvalue, total);
}
