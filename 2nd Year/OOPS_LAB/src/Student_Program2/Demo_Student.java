package Student_Program2; // Do not write this while copying in Lab Record/ executing on your own
import java.util.Scanner;

public class Demo_Student {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of Students : ");
		int n = sc.nextInt();
		Student s[] = new Student[n];
		
		for(int i=0;i<n;i++)
		{
			s[i]= new Student();
			System.out.println("Enter Name of Student "+(i+1)+" : ");
			s[i].name = sc.next();
			System.out.println("Enter USN of Student "+(i+1)+" : ");
			s[i].USN = sc.next();
			System.out.println("Enter Branch of Student "+(i+1)+" : ");
			s[i].branch = sc.next();
			System.out.println("Enter phone number of Student "+(i+1)+" : ");
			s[i].phone = sc.nextLong();
		}
		System.out.println("Name \t|\t  USN \t|\t Branch \t|\t Phone \t|");
		for(int i=0;i<n;i++)
		{
			s[i].display();
		}
		sc.close();
	}
}
