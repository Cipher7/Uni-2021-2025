import java.util.Scanner;

public class knapsack {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int object,m;
		System.out.println("Enter total objects : ");
		object = sc.nextInt();
		int weight[] = new int[object];
		int profit[] = new int[object];
		for(int i=0;i<object;i++)
		{
			System.out.println("Enter profit : ");
			profit[i] = sc.nextInt();
			System.out.println("Enter weight : ");
			weight[i] = sc.nextInt();
		}
		System.out.println("Enter knapsack capacity : ");
		m = sc.nextInt();
		double p_w[] = new double[object];
		for(int i=0;i<object;i++)
		{
			p_w[i] = (double)profit[i]/(double)weight[i];
		}
		
	}

}
