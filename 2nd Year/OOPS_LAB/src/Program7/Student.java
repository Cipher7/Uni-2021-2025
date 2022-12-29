package Program7;       // Do not write this while copying in Lab Record/ executing on your own

import java.util.Scanner;

public class Student implements Resume{

	String name;
	String gender;
	int result;
	String discipline;
	
	public static void main(String[] args) 
	{
		Student s = new Student();
		s.biodata();
	}
	
	public void biodata()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the name : ");
		name = sc.nextLine();
		System.out.println("Enter the gender : ");
		gender = sc.next();
		System.out.println("Enter your result : ");
		result = sc.nextInt();
		System.out.println("Enter discipline : ");
		discipline = sc.nextLine();
		
		// Printing the Resume
		
		System.out.println("#..............................RESUME..............................");
		System.out.println("Name : " + name);
		System.out.println("Gender : " + gender);
		System.out.println("Discipline : " + discipline);
		System.out.println("Result : " + result);
		sc.close();
	}
}
