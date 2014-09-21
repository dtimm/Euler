/* https://projecteuler.net/problem=19
 * You are given the following information, but you may prefer to do some
 * research for yourself.
 *
 * 1 Jan 1900 was a Monday.
 * Thirty days has September,
 * April, June and November.
 * All the rest have thirty-one,
 * Saving February alone,
 * Which has twenty-eight, rain or shine.
 * And on leap years, twenty-nine.
 * A leap year occurs on any year evenly divisible by 4, but not on a century
 * unless it is divisible by 400.
 * How many Sundays fell on the first of the month during the twentieth century
 * (1 Jan 1901 to 31 Dec 2000)?
 *
 * David Timm 2014-09-17
 */

#include <stdio.h>

int main(void)
{
	int day = 2; // start on Tuesday, 01 JAN 1901
	int i;
	int sundays = 0;

	for(i = 1901; i <= 2000; i++)
	{
		day += 31; // Jan - Feb
		if(day%7 == 0)
		{
			sundays++;
			printf("01 Feb %d\n", i);
		}
		day += 28; // Feb - Mar
		if((i)%4 == 0) day++; // leap year.
		if(day%7 == 0)
		{
			sundays++;
			printf("01 Mar %d\n", i);
		}
		day += 31; // Mar - Apr
		if(day%7 == 0)
		{
			sundays++;
			printf("01 Apr %d\n", i);
		}
		day += 30; // Apr - May
		if(day%7 == 0)
		{
			sundays++;
			printf("01 May %d\n", i);
		}
		day += 31; // May - Jun
		if(day%7 == 0)
		{
			sundays++;
			printf("01 Jun %d\n", i);
		}
		day += 30; // Jun - Jul
		if(day%7 == 0)
		{
			sundays++;
			printf("01 Jul %d\n", i);
		}
		day += 31; // Jul - Aug
		if(day%7 == 0)
		{
			sundays++;
			printf("01 Aug %d\n", i);
		}
		day += 31; // Aug - Sep
		if(day%7 == 0)
		{
			sundays++;
			printf("01 Sep %d\n", i);
		}
		day += 30; // Sep - Oct
		if(day%7 == 0)
		{
			sundays++;
			printf("01 Oct %d\n", i);
		}
		day += 31; // Oct - Nov
		if(day%7 == 0)
		{
			sundays++;
			printf("01 Nov %d\n", i);
		}
		day += 30; // Nov - Dec
		if(day%7 == 0)
		{
			sundays++;
			printf("01 Dec %d\n", i);
		}
		if(i != 2000)
		{
			day += 31; // Dec - Jan
			if(day%7 == 0)
			{
				sundays++;
				printf("01 Jan %d\n", i+1);
			}
		}
	}

	printf("%d\n", sundays);
}
