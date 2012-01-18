package com.armes.euler009;

public class Euler009
{
	// find the only Pythagorean triplet that adds up to 1000
	
	public static void main(String[] args)
	{
		int a = 1, b = 1 , c = 998;
		int a2b2 = 2;
		boolean isFound = false;
		
		while(!isFound)
		{
			a2b2 = a*a + b*b;
			if(a2b2 == c*c)
			{
				isFound = true;
				System.out.print("A: " + a +"\nB: " + b + "\nC: " + c);
			}
			if(a2b2 > c*c)
			{
				b++;
				a--;
			}
			if(a2b2 < c*c)
			{
				a++;
				c--;
			}
		}
		
		System.out.print("\nProduct: " + a*b*c);
	}	
}
