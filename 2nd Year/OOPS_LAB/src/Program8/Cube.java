package Program8;

import java.util.Scanner;

public class Cube extends Thread{

		public void run()
		{
			int a;
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter a number : ");
			a = sc.nextInt();
			System.out.println("Cube of the number is : " + (a*a*a));
			sc.close();
		}
}
