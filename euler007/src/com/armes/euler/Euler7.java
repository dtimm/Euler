package com.armes.euler;

public class Euler7
{
	public static void main(String[] args)
	{
		// find the 10001st prime number
		boolean isFound = false;
		int iter = 3; // iterator
		int primesFound = 1;
		
		while(!isFound)
		{
			if(isPrime(iter))
			{
				primesFound++;
				System.out.print("prime: " + iter + " is p" + primesFound + "\n");
			}
			iter++;
			if(primesFound == 10001) isFound = true;
		}
	}
	
	public static boolean isPrime(int check)
	{
		boolean prime = true;
		for(int i=2;i<=Math.sqrt(check);i++)
		{
			if(check%i == 0) prime = false;
		}
		return prime;
	}

}
