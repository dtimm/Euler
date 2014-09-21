/* https://projecteuler.net/problem=16
 * 215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
 *
 * What is the sum of the digits of the number 2^1000?
 *
 * David Timm 2014-09-16
 */

#include <gmp.h>
#include <stdio.h>

int main()
{
  char * strvalue;
  int i;
  int total = 0;
  mpz_t value;
  mpz_init_set_str(value, "2", 10);
  mpz_pow_ui(value, value, 1000);

  strvalue = mpz_get_str(NULL, 10, value);

  for(i = 0;i<512;i++)
  {
    if((char)strvalue[i] == '\0') break;
    total += (int)strvalue[i]-48;
  }

  printf("%s\nSum of digits: %d\n", strvalue, total);
}
