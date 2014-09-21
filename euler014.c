#include <stdio.h>

int main()
{
  int i;
  int max_chain = 10;
  long max_value = 13;
  int current_chain = 0;
  long current_value = 0;

  for(i = 500001;i<1000000;i+=2)
  {
    current_value = i;
    current_chain = 1;

    while(current_value != 1)
    {
      //printf("%d ", current_value);
      switch(current_value%2)
      {
        case 0:
          current_value = current_value / 2;
          break;
        case 1:
          current_value = current_value * 3 + 1;
          break;
      }
      current_chain++;
    }

    if(current_chain > max_chain)
    {
      max_chain = current_chain;
      max_value = i;
    }
  }

  printf("%d - %d\n", max_value, max_chain);
}
