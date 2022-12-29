package Program7;

import java.util.Scanner;

public class Teacher implements Resume{

	int experience;
	String name;
	String gender;
	String achievements;
	String qualification;
	
	public void main(String[] args) 
	{
		Teacher t = new Teacher();
		t.biodata();
	}
	
	public void biodata()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the name : ");
		name = sc.nextLine();
		System.out.println("Enter the gender : ");
		gender = sc.next();
		System.out.println("Enter the qualification : ");
		qualification = sc.nextLine();
		System.out.println("Enter experience : ");
		experience = sc.nextInt();
		System.out.println("Enter achievements : ");
		achievements = sc.nextLine();
		
		// Printing the Resume
		
		System.out.println("#..............................RESUME..............................");
		System.out.println("Name : " + name);
		System.out.println("Gender : " + gender);
		System.out.println("Qualification : " + qualification);
		System.out.println("Experience : " + experience);
		System.out.println("Achievements : " + achievements);
		sc.close();
	}
}
