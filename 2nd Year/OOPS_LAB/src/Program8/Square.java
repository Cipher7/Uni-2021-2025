package Program8;

import java.util.Scanner;

public class Square extends Thread {
	
	public void run()
	{
		int a;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number : ");
		a = sc.nextInt();
		System.out.println("Square of the number is : " + (a*a));
		sc.close();
	}
}
