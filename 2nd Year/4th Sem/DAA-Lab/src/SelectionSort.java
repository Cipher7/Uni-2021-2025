import java.util.*;
import java.util.Random;

public class SelectionSort {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n : ");
		int n = sc.nextInt();
		int arr[] = new int[n];
		Random r = new Random();
		for(int i=0;i<n;i++)
		{
			arr[i] = r.nextInt(100);
		}

		double st = System.nanoTime();
		arr = sort(arr, n);
		double end = System.nanoTime();
		
		double time = end - st;
		
		System.out.println("\nTime taken : " + time);
		sc.close();
	}
	
	public static int[] sort(int[] arr, int n)
	{
		int min;
		for(int i=0;i<n;i++)
		{
			min = i;
			for(int j=i+1;j<n;j++)
			{
				if(arr[j] < arr[min])
				{
					min = j;
				}
			}
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
		return arr;
	}

}
