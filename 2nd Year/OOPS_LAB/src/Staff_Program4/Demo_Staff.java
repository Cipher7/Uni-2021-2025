package Staff_Program4;

import java.util.Scanner;

public class Demo_Staff {

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		
		Technical emp_tech[] = new Technical[3];
		Teaching emp_teach[] = new Teaching[3];
		Contract emp_contract[] = new Contract[3];
		
		System.out.print("\nEnter no. of Teaching Staff : ");
		int n_teach = sc.nextInt();
		System.out.println("\nTeaching Staff :\n ");
		for(int i=0;i<n_teach;i++)
		{
			emp_teach[i] = new Teaching();
			emp_teach[i].readData();
		}
		
		System.out.print("\nEnter no. of Technical Staff : ");
		int n_tech = sc.nextInt();
		System.out.println("\nTechnical Staff :\n ");
		for(int i=0;i<n_tech;i++)
		{
			emp_tech[i] = new Technical();
			emp_tech[i].readData();
		}
		
		System.out.print("\nEnter no. of Contract Staff : ");
		int n_contract = sc.nextInt();
		System.out.println("\nContract Staff :\n ");
		for(int i=0;i<n_contract;i++)
		{
			emp_contract[i] = new Contract();
			emp_contract[i].readData();
		}
		
		System.out.println("\nEmployee Details : \n");
		
		for(int i=0;i<n_teach;i++)
		{
			emp_teach[i].displayData();
		}
		for(int i=0;i<n_tech;i++)
		{
			emp_tech[i].displayData();
		}
		for(int i=0;i<n_contract;i++)
		{
			emp_contract[i].displayData();
		}
		sc.close();
	}
}
