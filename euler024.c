/* https://projecteuler.net/problem=24
 * A permutation is an ordered arrangement of objects. For example, 3124 is
 * one possible permutation of the digits 1, 2, 3 and 4. If all of the
 * permutations are listed numerically or alphabetically, we call it
 * lexicographic order. The lexicographic permutations of 0, 1 and 2 are:
 *
 * 012   021   102   120   201   210
 *
 * What is the millionth lexicographic permutation of the digits 0, 1, 2, 3,
 * 4, 5, 6, 7, 8 and 9?
 *
 * David Timm 2014-09-21
 */

#include <stdio.h>

int main(void)
{
  int permutation = 1;
  int i;
  int number[10] = {0,1,2,3,4,5,6,7,8,9};


}

/*Find the largest index k such that a[k] < a[k + 1]. If no such index exists, the permutation is the last permutation.
Find the largest index l greater than k such that a[k] < a[l].
Swap the value of a[k] with that of a[l].
Reverse the sequence from a[k + 1] up to and including the final element a[n].*/
