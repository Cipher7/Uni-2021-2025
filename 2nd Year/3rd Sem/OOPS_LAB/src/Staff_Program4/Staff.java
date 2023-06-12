package Staff_Program4;      // Do not write this while copying in Lab Record/ executing on your own
import java.util.Scanner;

public class Staff 
{
	int staffID;
	long phone;
	long salary;
	String name;
	Scanner sc =new Scanner(System.in);
	
	void readData()
	{
		
		System.out.println("Enter the name of the Employee : ");
		name = sc.next();
		System.out.println("Enter the staffID of the Employee : ");
		staffID = sc.nextInt();
		System.out.println("Enter the salary of the Employee : ");
		salary = sc.nextLong();
		System.out.println("Enter the phone number of the Employee : ");
		phone = sc.nextLong();
	}
	
	void displayData()
	{
		System.out.println("Name of the Employee : " + name);
		System.out.println("Staff Id of the Employee : " + staffID);
		System.out.println("Salary of the Employee : " + salary);
		System.out.println("Phone Number of the Employee : " + phone);
	}
}  

class Teaching extends Staff
{
	String domain;
	String pub[];
	
	void readData()
	{	
		super.readData();
		System.out.println("Enter the domain : ");
		domain = sc.next();
		System.out.println("Enter the number of publications : ");
		int n = sc.nextInt();
		pub = new String[n];
		System.out.println("Enter the names of "+ n + " publications : ");
		for(int i=0;i<n;i++)
		{
			pub[i] = sc.next();
		}
	}
	
	void displayData()
	{
		super.displayData();
		System.out.println("Domain : " + domain);
		System.out.println("Publications : ");
		for(int i=0;i<pub.length;i++)
		{
			System.out.println(pub[i]);
		}
	}
}

class Technical extends Staff
{
	String skills[];
	void readData()
	{
		super.readData();
		System.out.println("Enter the number of skills : ");
		int n = sc.nextInt();
		skills = new String[n];
		System.out.println("Enter " + n + " skills : ");
		for(int i=0;i<n;i++)
		{
			skills[i] = sc.next();
		}
	}
	
	void displayData()
	{
		super.displayData();
		System.out.println("Skills : ");
		for(int i=0;i<skills.length;i++)
		{
			System.out.println(skills[i]);
		}
	}
}

class Contract extends Staff
{
	double period;
	void readData()
	{
		super.readData();
		System.out.println("Enter period of Contract : ");
		period = sc.nextDouble();
	}
	
	void displayData()
	{
		super.displayData();
		System.out.println("Period of Contract : " + period);
	}
}
