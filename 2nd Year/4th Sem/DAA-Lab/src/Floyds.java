import java.util.Scanner;

public class Floyds {
	private int dmatrix[][];
	private int n;
	public static final int INFINITY=999;
	
	public Floyds(int n)
	{
		dmatrix = new int[n+1][n+1];
		this.n = n;
	}
	
	public void floyd(int amatrix[][])
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				dmatrix[i][j] = amatrix[i][j];
			}
		}
		for(int k=1;k<=n;k++)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					if(dmatrix[i][k]+dmatrix[k][j] < dmatrix[i][j])
					{
						dmatrix[i][j] = dmatrix[i][k] + dmatrix[k][j];
					}
				}
			}
		}
		for(int source = 1;source<=n;source++)
		{
			System.out.print("\t" + source);
		}
		System.out.println();
		for(int source = 1;source<=n;source++)
		{
			System.out.print(source + "\t");
			for(int destination = 1;destination<=n;destination++)
			{
				System.out.print(dmatrix[source][destination] + "\t");
			}
			System.out.println();
		}
	}
	public static void main(String[] args) {
		int wmatrix[][];
		int n;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of vertices : ");
		n = sc.nextInt();
		wmatrix = new int[n+1][n+1];
		System.out.println("Enter the weighted matrix for the graph : ");
		for(int source = 1;source<=n;source++)
		{
			for(int destination=1;destination<=n;destination++)
			{
				wmatrix[source][destination] = sc.nextInt();
				if(source == destination)
				{
					wmatrix[source][destination] = 0;
					continue;
				}
				if(wmatrix[source][destination] == 0)
				{
					wmatrix[source][destination] = INFINITY;
				}
			}
		}
		System.out.println("Following matrix shows the shortest distance between two nodes");
		Floyds floyd = new Floyds(n);
		floyd.floyd(wmatrix);
		sc.close();
	}

}
