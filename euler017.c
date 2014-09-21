/* https://projecteuler.net/problem=17
 * If the numbers 1 to 5 are written out in words: one, two, three, four, five,
 * then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
 *
 * If all the numbers from 1 to 1000 (one thousand) inclusive were written out
 * in words, how many letters would be used?
 *
 * NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and
 * forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20
 * letters. The use of "and" when writing out numbers is in compliance with
 * British usage.
 *
 * David Timm 2014-09-17
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* to_words(int);

int main()
{
  int i;
  int count = 0;

  for(i=1;i<=1000;i++)
  {
    count += strlen(to_words(i));
  }

  printf("%d\n", count);
}

char* to_words(int number)
{
  char* words;
  words = malloc(sizeof(char)*256);

  // thousands
  if(number == 1000) words = "onethousand";

  // hundreds
  switch(number/100)
  {
    case 0:
      break;
    case 1:
      words = strcat(words, "onehundred");
      break;
    case 2:
      words = strcat(words, "twohundred");
      break;
    case 3:
      words = strcat(words, "threehundred");
      break;
    case 4:
      words = strcat(words, "fourhundred");
      break;
    case 5:
      words = strcat(words, "fivehundred");
      break;
    case 6:
      words = strcat(words, "sixhundred");
      break;
    case 7:
      words = strcat(words, "sevenhundred");
      break;
    case 8:
      words = strcat(words, "eighthundred");
      break;
    case 9:
      words = strcat(words, "ninehundred");
      break;
  }

  // tens
  if(strlen(words) > 0 && number%100 != 0) words = strcat(words, "and");

  switch((number - (number/100)*100)/10)
  {
    case 0:
    case 1:
      break;
    case 2:
      words = strcat(words, "twenty");
      break;
    case 3:
      words = strcat(words, "thirty");
      break;
    case 4:
      words = strcat(words, "forty");
      break;
    case 5:
      words = strcat(words, "fifty");
      break;
    case 6:
      words = strcat(words, "sixty");
      break;
    case 7:
      words = strcat(words, "seventy");
      break;
    case 8:
      words = strcat(words, "eighty");
      break;
    case 9:
      words = strcat(words, "ninety");
      break;
  }

  switch(number%100)
  {
    case 1:
      words = strcat(words, "one");
      break;
    case 2:
      words = strcat(words, "two");
      break;
    case 3:
      words = strcat(words, "three");
      break;
    case 4:
      words = strcat(words, "four");
      break;
    case 5:
      words = strcat(words, "five");
      break;
    case 6:
      words = strcat(words, "six");
      break;
    case 7:
      words = strcat(words, "seven");
      break;
    case 8:
      words = strcat(words, "eight");
      break;
    case 9:
      words = strcat(words, "nine");
      break;
    case 10:
      words = strcat(words, "ten");
      break;
    case 11:
      words = strcat(words, "eleven");
      break;
    case 12:
      words = strcat(words, "twelve");
      break;
    case 13:
      words = strcat(words, "thirteen");
      break;
    case 14:
      words = strcat(words, "fourteen");
      break;
    case 15:
      words = strcat(words, "fifteen");
      break;
    case 16:
      words = strcat(words, "sixteen");
      break;
    case 17:
      words = strcat(words, "seventeen");
      break;
    case 18:
      words = strcat(words, "eighteen");
      break;
    case 19:
      words = strcat(words, "nineteen");
      break;
    default:
      switch(number%10)
      {
        case 1:
          words = strcat(words, "one");
          break;
        case 2:
          words = strcat(words, "two");
          break;
        case 3:
          words = strcat(words, "three");
          break;
        case 4:
          words = strcat(words, "four");
          break;
        case 5:
          words = strcat(words, "five");
          break;
        case 6:
          words = strcat(words, "six");
          break;
        case 7:
          words = strcat(words, "seven");
          break;
        case 8:
          words = strcat(words, "eight");
          break;
        case 9:
          words = strcat(words, "nine");
          break;
      }
      break;
  }

  printf("%s\n", words);
  return words;
}
