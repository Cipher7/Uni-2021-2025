import java.util.Random;
import java.util.Scanner;

public class MergeSort {
	
	static int arr[],c[];
	
	MergeSort(int n)
	{
		arr = new int[n];
		c = new int[n];
	}
	
	public static void swap(int a, int b)
	{
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	
	public static void simplemerge(int low, int mid, int high)
	{
		int i=low, j=mid+1,k=0;
		while(i<=mid && j<=high)
		{
			if(arr[i] <= arr[j])
			{
				c[k] = arr[i];
				i++;k++;
			}
			else
			{
				c[k] = arr[j];
				j++;k++;
			}
		}
		while(i<=mid)
		{
			c[k] = arr[i];
			k++;i++;
		}
		while(j<=high)
		{
			c[k] = arr[j];
			j++;k++;
		}
//		for(int p=0;p<c.length;p++)
//		{
//			arr[i]=c[i];
//		}
	}
	
	public static void msort(int low, int high)
	{
		int mid;
		if(low<high)
		{
			mid = (low+high)/2;
			msort(low,mid);
			msort(mid+1,high);
			simplemerge(low,mid,high);
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter choice : ");
		int choice = sc.nextInt();
		System.out.println("Enter length : ");
		int n = sc.nextInt();
		MergeSort ob = new MergeSort(n);
		if(choice == 1)
		{
			for(int i=0;i<n;i++)
				arr[i] = i;
		}
		else if(choice == 2)
		{
			for(int i=0;i<n;i++)
				arr[i] = n-i;
		}
		else
		{
			Random r = new Random();
			for(int i=0;i<n;i++)
			{
				arr[i] = r.nextInt(1000000);
			}
		}
		// MergeSort
		double st = System.nanoTime();
		msort(0,n-1);
		double end = System.nanoTime();
		
		double time = end - st;
		time = time/(Math.pow(10,6));
		System.out.println("\nTime taken : " + time);
		
		for(int i=0;i<n;i++)
		{
			System.out.println(c[i]);
		}
		sc.close();
	}
}
