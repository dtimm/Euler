package com.armes.euler;

public class Euler5
{
	// find the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
	public static void main(String[] args)
	{
		int count = 20;
		boolean found;
		
		while(true)
		{
			found = true;
			for(int i = 2;i<=20;i++)
			{
				if(count%i != 0) found = false;
			}
			if(found) break;
			count+=20;
		}
		
		System.out.print(count); // 232792560
	}

}
