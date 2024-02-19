import java.util.*;

public class Prog6_BellmanFord {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num, source;
		System.out.println("Enter the number of vertices:");
		num = sc.nextInt();
		
		int adj[][] = new int[num][num];
		System.out.println("Enter the adjacency matrix:");
		for(int i = 0; i < num ; i++)
			for(int j = 0; j < num; j++)
				adj[i][j] = sc.nextInt();
		
		System.out.println("Enter the source node:");
		source = sc.nextInt();
		belford(adj,num,source);
	}
	
	private static void belford(int[][] adj, int num, int source)
	{
		int d[] = new int[num];
		for(int i = 0; i < num; i++)
			d[i] = 999;
		
		d[source] = 0;
		for(int i = 0; i < num-1; i++)
		{
			for(int u = 0; u < num; u++)
			{
				for(int v = 0; v < num; v++)
				{
					if(d[u] != 999)
					{
						if(d[v] > d[u] + adj[u][v])
						{
							d[v] = d[u] + adj[u][v];
						}
					}
				}
			}
		}
		
		for(int i = 0; i < num; i++)
			System.out.println("Distance of source "+source+" to "+i+" is "+d[i]);
	}
}

/*
Enter the number of vertices:
5
Enter the adjacency matrix:
0	3	999	2	999
3	0	5	999	3
999	5	0	4	999
2	999	4	0	2
999	3	999	2	0
Enter the source node:
0
Distance of source 0 to 0 is 0
Distance of source 0 to 1 is 3
Distance of source 0 to 2 is 6
Distance of source 0 to 3 is 2
Distance of source 0 to 4 is 4
*/