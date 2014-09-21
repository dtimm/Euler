/* https://projecteuler.net/problem=22
 * Using names.txt (right click and 'Save Link/Target As...'), a 46K text file
 * containing over five-thousand first names, begin by sorting it into
 * alphabetical order. Then working out the alphabetical value for each name,
 * multiply this value by its alphabetical position in the list to obtain a
 * name score.
 *
 * For example, when the list is sorted into alphabetical order, COLIN, which
 * is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN
 * would obtain a score of 938 × 53 = 49714.
 *
 * What is the total of all the name scores in the file?
 *
 * David Timm 2014-09-17
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  fp = fopen("./euler022_names.txt", "r");
  char name[64];

  int i;
  unsigned long total = 0;
  int current = 0;
  int line = 0;

  if (fp == NULL)
  {
    printf("Cannot read file!\n");
    return 1;
  }

  while(fscanf(fp, "%s", name) != EOF)
  {
    line++;
    current = 0;
    printf("%s", name);
    for(i = 0;i<64;i++)
    {
      if((char)name[i] == '\0') break;
      current += (int)name[i]-64;
    }
    printf(" %d", current);
    current = current * line;
    printf(" %d", current);
    total += current;
    printf(" %d\n", total);
  }

  printf("TOTAL: %d\n", total);

  fclose(fp);
}
