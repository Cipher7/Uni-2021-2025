import java.util.*;

public class DijkstraDemo

public static int min(int a, int b) // method to return the minimum of two numbers

{if(a<b) return a

else

return b;

1 public static boolean check int[] vint n)

{for(int i=1;i<n+1;i++)

{v[i]=1) return true;

1

return false;

public static void main(String[] args) { Scanner s-new Scanner(System.in);

System.out.println("Enter the number of nodes in graph"); int ns.nextInt();

intij

int graph-new int[n+1][n+1); int visited-new int[n+1):

int d[]= new int[n+11:

TreeMap<Integer, Integer> map= new TreeMap<Integer Integer>(); System.out.println("Enter cost

adjacency matrix for graph. If two nodes are not connected enter 999");

for(i=1;i<n+1;i++)

(visited[i]-0; d[i]-999;

System.out.println("Enter the source vertex"); int source-s nextint(): visited[source]=1; d[source] 0:

int u-source; int v,a=0;

do // Calculating the d[] array

if(graph|u|[v]-999 && visited[v]-1 && graph[u][v]!=0) {d[v]-min{d[v]{d[u]+graph[u][v]]); map.put(d[v].v)

1

J

u-map.firstEntry().getValue(); visited[u]=1;

map.clear();

while(check(visited,n)); for(i=1;i<n+1;i++)

System.out.println("Distance from source to ++is+d