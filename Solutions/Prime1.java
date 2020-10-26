// https://www.spoj.com/problems/PRIME1/
// PRIME1 - Prime Generator
// File Creation Date: 25-Oct-2020
// Author: Devanshu(https://github.com/Blackwatch1910)

import java.util.*;
import java.lang.*;

class PRIME1
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int a,b,i,n,j;
		 Scanner sc = new Scanner(System.in);

		 n = sc.nextInt();
		 for(i=0;i<n;i++)
		 {
			a = sc.nextInt();
			b = sc.nextInt();
		  	System.out.println();
		  	for(j=a;j<=b;j++)
		  	{
		  		if(checkprime(j))
		    		System.out.println(j);
		  	}
		 }
	}
	public static boolean checkprime (int num)
	{
	    if (num <=1)
	        return false;
	    else if (num == 2)
	        return true;
	    else if (num % 2 == 0)
	        return false;
	    else
	    {
	        boolean prime = true;
	        int divisor = 3;

	        long upperLimit = (long)Math.sqrt(num) +1;

	        while (divisor <= upperLimit)
	        {
	            if (num % divisor == 0)
	                return false;
	            divisor +=2;
	        }
	        return prime;
	    }
	}
}
