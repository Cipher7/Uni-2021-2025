package QE_Program1;      // Do not write this while copying in Lab Record/ executing on your own

import java.util.Scanner;

public class quadratic {

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the values of a,b,c : ");
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		
		if(a == 0)
		{
			System.out.println("It is a Linear Equation");
			System.exit(0);
		}
		else
		{
			float r1 = 0;
			float r2 = 0;
			float D = (b*b)-(4*a*c);
			if(D == 0)
			{
				r1 = -(b)/(2*a);
				r2 = r1;
			}
			else if(D > 0)
			{
				r1 = (float) (-(b)+Math.sqrt(D));
				r2 = (float) (-(b)-Math.sqrt(D));
			}
			else
			{
				float real = -(b)/(2*a);
				float img = (float) (Math.sqrt(-D)/(2*a));
				System.out.printf("Real : %.2f \n" , real);
				System.out.printf("Img  : %.2f \n" , img);
				System.out.print("\nEquation : ");
				System.out.printf(real + " + %.2fi", img);
				System.exit(0);
			}
			System.out.println("Root 1 : " + r1);
			System.out.println("Root 2 : " + r2);
		}
		sc.close();
	}
}
