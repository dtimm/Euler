package com.armes.euler;

public class Euler6
{
	public static void main(String[] args)
	{
		// find the difference between the square of the sums
		// and the sum of the squares of the first 100 natural numbers
		
		long sums = 0;
		long squares = 0;
		
		for(int i = 1;i<=100;i++)
		{
			sums+=i;
		}
		
		sums = sums * sums;
		
		for(int j = 1;j<=100;j++)
		{
			squares += j*j;
		}
		
		System.out.print(sums-squares);
	}

}
