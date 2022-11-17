package Program3;
import java.util.Scanner;

public class simple_calculator {

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int a,b;
		System.out.println("Enter number 1 : ");
		a = sc.nextInt();
		System.out.println("Enter number 2 : ");
		b = sc.nextInt();
		
		char op;
		System.out.println("Enter the operator : ");
		op = sc.next().charAt(0);
		float ans = 0;
		switch(op)
		{
		case '+' :  ans = a+b;
					break;
		case '-' :  ans = a-b;
					break;
		case '*' :  ans = a*b;
					break;
		case '/' :  ans = a/b;
					break;
		case '%' :  ans = a%b;
					break;
		default : System.out.println("Enter a valid operator.");
					break;
		}
		System.out.printf("Ans : %.2f", ans);
		sc.close();
	}
}
