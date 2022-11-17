package Program3;
import java.util.Scanner;

public class prime {

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number : ");
		int n = sc.nextInt();
		
		for(int i=2; i<n;i++)
		{
			if(n%i == 0)
			{
				System.out.println("The number is not a prime number");
				System.exit(0);
			}
		}
		System.out.println("The number is  a prime number");
		sc.close();
	}

}
