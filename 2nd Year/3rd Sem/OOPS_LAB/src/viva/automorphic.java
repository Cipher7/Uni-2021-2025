package viva;

import java.util.Scanner;

public class automorphic {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number : ");
		int n = sc.nextInt();
		
		int temp = n;
		int l_orig = 0;
		
		while(temp != 0)
		{
			int d = temp%10;
			l_orig += 1;
			temp = temp/10;
		}
		
		temp = n;
		
		int sq = (int) Math.pow(n, 2);
		int tens = (int)(Math.pow(10,l_orig));
		int val = (int)sq%tens;
		if (val == n)
		{
			System.out.println("YES");
		}
		else
		{
			System.out.println("NO");
		}
		sc.close();
	}

}
