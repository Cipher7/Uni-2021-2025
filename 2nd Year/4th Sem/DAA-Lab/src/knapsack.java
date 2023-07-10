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
		System.out.println("");
		System.out.println("-------------------");
		System.out.println("-----Data-Set------");
		System.out.print("-------------------");
		System.out.println("");
		System.out.print("Objects  ");
		for(int i=1;i<=object;i++)
		{
			System.out.print(i+"    ");
		}
		System.out.println();
		System.out.print("Profit   ");
		for(int i=0;i<object;i++)
		{
			System.out.print(profit[i]+"  ");
		}
		System.out.println();
		System.out.print("Weight   ");
		for(int i=0;i<object;i++)
		{
			System.out.print(weight[i]+"  ");
		}
		System.out.println();
		System.out.print("P/W      ");
		for(int i=0;i<object;i++)
		{
			System.out.print(p_w[i]+"  ");
		}
		for(int i=0;i<object-1;i++)
		{
			for(int j=i+1;j<object;j++)
			{
				if(p_w[i]<p_w[j])
				{
					double temp=p_w[j];
					p_w[j]=p_w[i];
					p_w[i]=temp;
					
					int temp1=profit[j];
					profit[j]=profit[i];
					profit[i]=temp1;
					
					int temp2=weight[j];
					weight[j]=weight[i];
					weight[i]=temp2;
			}
			}
		}
		System.out.println("");
		System.out.println("-------------------");
		System.out.println("--After Arranging--");
		System.out.print("-------------------");
		System.out.println("");
		System.out.print("Objects  ");
		for(int i=1;i<=object;i++)
		{
			System.out.print(i+"    ");
		}
		System.out.println();
		System.out.print("Profit   ");
		for(int i=0;i<object;i++)
		{
			System.out.print(profit[i]+"  ");
		}
		System.out.println();
		System.out.print("Weight ");
		for(int i=0;i<object;i++)
		{
			System.out.print(weight[i]+"    ");
		}
		System.out.println();
		System.out.print("P/W      ");
		for(int i=0;i<object;i++)
		{
			System.out.print(p_w[i]+"  ");
		}
		int k=0;
		double sum=0;
		System.out.println();
		while(m>0)
		{
			if(weight[k]<m)
			{
				
				sum+=1*profit[k];
				m=m-weight[k];
				k++;
			}
			else
			{
				
				double x4=m*profit[k];
				double x5=weight[k];
				double x6=x4/x5;
				sum=sum+x6;
				m=0;
			}
		
		}
		System.out.println("Final Profit is="+sum);
	}
}
