import java.util.Random;
import java.util.Scanner;

public class QuickSort {
	
	static int arr[];
	
	QuickSort(int n)
	{
		arr = new int[n];
	}
	
	public static void swap(int a, int b)
	{
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	
	public static int partition(int low, int high)
	{
		int i=low+1, j=high, key = arr[0];
		while(i<=j)
		{
			while(key >= arr[i])
				i++;
			while(key <= arr[j])
				j--;
			if(i<j)
				swap(i,j);
		}
		swap(0,j);
		return j;
	}
	
	public static void qsort(int low, int high)
	{
		int s;
		if(low<high)
		{
			s = partition(low,high);
			qsort(low,s-1);
			qsort(s+1,high);
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter length : ");
		int n = sc.nextInt();
		QuickSort ob = new QuickSort(n);
		Random r = new Random();
		for(int i=0;i<n;i++)
		{
			arr[i] = r.nextInt(100);
		}
		
		// QuickSort
		qsort(0,n-1);
		
		for(int k=0;k<n;k++)
		{
			System.out.print(" " + arr[k]);
		}
		sc.close();
	}
}
