package com.armes.euler;

public class Euler4
{
	public static void main(String[] args)
	{
		// find the largest palindrome made from the product of two 3-digit numbers
		int biggest = 0;
		
		for(int i = 1000;i>100;i--)
		{
			for(int j = i;j>100;j--) // don't recheck pairings that have already happened
			{
				if(isPalindrome(i*j))
				{
					if((i*j) > biggest) biggest = i*j;
					System.out.print(biggest + "\n");
				}
			}
		}
	}
	
	public static boolean isPalindrome(int check)
	{
		String store = String.valueOf(check);
		boolean itIs = true;
		
		for(int i=0,j=store.length()-1;i<=j;i++,j--)
		{
			if(store.charAt(i) != store.charAt(j))
			{
				itIs = false;
			}
		}
		
		return itIs;
	}

}
