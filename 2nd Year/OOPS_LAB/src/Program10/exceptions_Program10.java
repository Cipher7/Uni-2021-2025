package Program10;

import java.util.Scanner;

public class exceptions_Program10 {

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		float a,b,res;
		System.out.println("Enter a : ");
		a = sc.nextFloat();
		System.out.println("Enter b : ");
		b = sc.nextFloat();
		
		try
		{
			if(b == 0)
			{
				sc.close();
				throw new ArithmeticException();
			}
			res = a/b;
		
			System.out.println("Result : " + res);
			sc.close();
		}
		catch(ArithmeticException e)
		{
			e.printStackTrace();	
		}
	}
}
