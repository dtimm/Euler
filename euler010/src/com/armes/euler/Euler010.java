package com.armes.euler;

public class Euler010
{
	// find the sum of all primes below 2000000
	
	public static void main(String[] args) 
	{
		long primeSum = 5;
		for(int i = 5;i < 2000000;i += 2)
		{
			if(isPrime(i))
			{
				primeSum += i;
			}
		}
		System.out.print(primeSum);
	}
	
	public static boolean isPrime(int check)
	{
		boolean prime = true;
		for(int i=3;i<=Math.sqrt(check);i++)
		{
			if(check%i == 0) prime = false;
		}
		return prime;
	}
}
