package com.armes.euler;

import java.lang.Math;

public class Euler3
{
	public static void main(String[] args)
	{
		// find the largest prime factor of 600851475143
		// 775146 is square root...
		
		long target = 600851475143L;
		int sqrtTarget = 775146; //a prime factor cannot be larger than sqrt of #
		int biggestPrime = 1;
		
		for(int i=3;i<sqrtTarget;i+=2)
		{
			// if it's a factor, check if it's prime
			if(target%i == 0)
			{
				if(isPrime(i)) biggestPrime = i;
			}
		}
		
		System.out.print(biggestPrime);
	}
	
	public static boolean isPrime(int check)
	{
		boolean prime = true;
		for(int i=3;i<Math.sqrt(check);i++)
		{
			if(check%i == 0) prime = false;
		}
		return prime;
	}
}
