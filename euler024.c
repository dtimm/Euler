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

#define NUMBER {0,1,2,3,4,5,6,7,8,9}
#define LENGTH 10
#define PERMUTATIONS 1000000

#include <stdio.h>

int find_k(int *, int);
int find_l(int *, int, int);
void reverse(int *, int);

int main(void)
{
  int i, j, k, l, temp;
  int number[LENGTH] = NUMBER;

	for(i = 1; i < PERMUTATIONS; i++)
	{
		k = find_k(number, LENGTH);
		l = find_l(number, LENGTH, k);

		// printf("%d %d\n", k, l);

		temp = number[k];
		number[k] = number[l];
		number[l] = temp;
		reverse(&number[k+1], LENGTH - (k + 1));

	  for(j = 0; j < LENGTH; j++)
	  {
			printf("%d", number[j]);
		}

		printf("\n");
	}
}

int find_k(int * word, int len)
{
  int i;
  int k = 0;
  for(i = 0; i < len - 1; i++)
  {
		if(word[i] < word[i+1]) k = i;
  }

	return k;
}

int find_l(int * word, int len, int k)
{
	int i, l;
	l = k;
	for(i = k + 1; i < len; i++)
	{
		if(word[i] > word[k]) l = i;
	}

	return l;
}

void reverse(int * substr, int len)
{
	int i;
	int temp[len];

	for(i = 0; i < len; i++)
	{
		temp[i] = substr[(len-1)-i];
	}

	for(i = 0; i < len; i++)
	{
		substr[i] = temp[i];
	}
}

/*Find the largest index k such that a[k] < a[k + 1]. If no such index exists,
the permutation is the last permutation.

Find the largest index l greater than k such that a[k] < a[l].

Swap the value of a[k] with that of a[l].

Reverse the sequence from a[k + 1] up to and including the final element a[n].*/
