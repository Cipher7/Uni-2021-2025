package Shapes_Program5;
import java.util.Scanner;

public class Shapes 
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		for(;;)
		{
			System.out.println("1. Circle \n2. Rectangle \n3. Square \n4. Triangle \n5. Exit");
			System.out.print("Choose one of the above options : ");
			int ch = sc.nextInt();
			switch(ch)
			{
			case 1 : System.out.print("Enter Radius of Circle : ");
					 double rad = sc.nextDouble();
					 Area(rad);
					 break;
			case 2 : System.out.print("Enter length of Rectangle : ");
			 		 int l = sc.nextInt();
			 		 System.out.print("Enter breadth of Rectangle : ");
			 		 int b = sc.nextInt();
			 		 Area(l,b);
			 		 break;
			case 3 : System.out.print("Enter side of square : ");
					 int s = sc.nextInt();
					 Area(s);
					 break;
			case 4 : System.out.print("Enter length of Triangle : ");
					 double bs = sc.nextDouble();
					 System.out.print("Enter breadth of Triangle : ");
			 		 double ht = sc.nextDouble();
			 		 Area(bs,ht);
			 		 break;
			case 5 : System.out.println("Exiting ...");
					 sc.close();
					 System.exit(0);
			default : System.out.print("Invalid Option!\n");
			}
		}
	}
	
	public static void Area(double r)
	{
		double area = Math.PI * r * r;
		System.out.println("Area of Circle is : " + area);
	}
	
	public static void Area(int l, int b)
	{
		int area = l*b;
		System.out.println("Area of Rectangle is : " + area);
	}
	
	public static void Area(int s)
	{
		int area = s*s;
		System.out.println("Area of Square is : " + area);
	}
	
	public static void Area(double b, double h)
	{
		double area = (1.0/2.0)*b*h;
		System.out.println("Area of a Triangle is : " + area);
	}
}
