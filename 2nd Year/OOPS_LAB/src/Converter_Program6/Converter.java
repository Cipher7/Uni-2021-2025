package Converter_Program6;

import java.util.Scanner;

import currencyconverter.currency;
import timeconverter.time;
import distanceconverter.distance;

public class Converter {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		while(true)
		{
			System.out.println("1. Currency Converter \n2. Time Converter \n3. Distance Converter \n4. Exit");
			System.out.print("Choose your option : ");
			int ch = sc.nextInt();
			System.out.println("\n");
			
			switch(ch)
			{
			case 1 : convertcurrency();
					 break;
			case 2 : converttime();
					 break;
			case 3 : convertdistance();
					 break;
			case 4 : sc.close();
					 System.exit(0);
			default : System.out.println("Invalid Options entered");
			}
		}
	}
	
	static int convertcurrency()
	{
		Scanner sc = new Scanner(System.in);
		currency c = new currency();
		
		while(true)
		{
			System.out.println("1. INR to DOLLAR \n2. INR to EURO \n3. INR to YEN \n4. DOLLAR to INR \n5. EURO to INR \n6. YEN to INR \n7. Exit");
			System.out.print("Choose one of the above option : ");
			int ch = sc.nextInt();
			System.out.println("\n");
			
			double inr,euro,dollar,yen;
			
			switch(ch)
			{
			case 1 : System.out.print("\nEnter currency in INR : ");
					 inr = sc.nextDouble();
					 c.inrtodollar(inr);
					 break;
			case 2 : System.out.print("\nEnter currency in INR : ");
					 inr = sc.nextDouble();
					 c.inrtoeuro(inr);
					 break;
			case 3 : System.out.print("\nEnter currency in INR : ");
					 inr = sc.nextDouble();
					 c.inrtoyen(inr);
					 break;
			case 4 : System.out.print("\nEnter currency in DOLLAR : ");
					 dollar = sc.nextDouble();
					 c.dollartoinr(dollar);
					 break;
			case 5 : System.out.print("\nEnter currency in EURO : ");
					 euro = sc.nextDouble();
					 c.eurotoinr(euro);
					 break;
			case 6 : System.out.print("\nEnter currency in YEN : ");
					 yen = sc.nextDouble();
					 c.yentoinr(yen);
					 break;
			case 7 : sc.close();
					 return 0;
			default : System.out.println("\nInvalid Option");
			}
		}
	}
	
	static int converttime()
	{
		Scanner sc = new Scanner(System.in);
		time t = new time();
		
		double hr,min,sec;
		while(true)
		{
			System.out.println("\n1. HOURS to MIN \n2. HOURS to SEC \n3. MIN to HOURS \n4. SEC to HOURS \n5. Exit");
			System.out.print("Choose one of the above option : ");
			int ch = sc.nextInt();
			System.out.println("\n");
			
			switch(ch)
			{
			case 1 : System.out.print("\nEnter Hours : ");
					 hr = sc.nextDouble();
					 t.hrtomin(hr);
					 break;
			case 2 : System.out.print("\nEnter Hours : ");
			 		 hr = sc.nextDouble();
			 		 t.hrtosec(hr);
			 		 break;
			case 3 : System.out.print("\nEnter Min : ");
			 		 min = sc.nextDouble();
			 		 t.mintohr(min);
			 		 break;
			case 4 : System.out.print("\nEnter Seconds : ");
			 		 sec = sc.nextDouble();
			 		 t.sectohr(sec);
			 		 break;
			case 5 : sc.close();
					 return 0;
			default : System.out.println("\nInvalid Option");
			}
		}
	}
	
	static int convertdistance()
	{
		Scanner sc = new Scanner(System.in);
		distance d = new distance();
		
		double mtr,km,miles;
		while(true)
		{
			System.out.println("\n1. KM to METERS \n2. KM to MILES \n3. MILE to KM \n4. METERS to KM \n5. Exit");
			System.out.print("Choose one of the above option : ");
			int ch = sc.nextInt();
			System.out.println("\n");
			
			switch(ch)
			{
			case 1 : System.out.print("\nEnter KM : ");
					 km = sc.nextDouble();
					 d.kmtometers(km);
					 break;
			case 2 : System.out.print("\nEnter KM : ");
					 km = sc.nextDouble();
					 d.kmtomiles(km);
					 break;
			case 3 : System.out.print("\nEnter Miles : ");
					 miles = sc.nextDouble();
					 d.milestokm(miles);
					 break;
			case 4 : System.out.print("Enter Meters : ");
					 mtr = sc.nextDouble();
					 d.meterstokm(mtr);
					 break;
			case 5 : sc.close();
					 return 0;
			default : System.out.println("\nInvalid Option");
			}
		}
	}

}
