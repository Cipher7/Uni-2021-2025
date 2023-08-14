import java.util.Scanner;

public class Kruskal {
    static int find(int x, int parent[]) {
        while(parent[x] >= 0) {
            x = parent[x];
        }
        return x;
    }

    static void setunion(int x, int y, int parent[]) {
        if (parent[x] == parent[y]) {
            parent[x] = parent[x] + parent[y];
            parent[y] = x;
        } else {
            parent[y] = parent[x] + parent[y];
            parent[x] = y;
        }
    }

    static void KruskalAlgo(int[][] edge, int n) {
        int i, x, y, cost = 0, ecount = 0;
        int[] parent = new int[n];
        for (i = 0; i < n; i++) {
            parent[i] = -1;
        }
        int[][] mst = new int[n][2];
        i = 0;
        while (i < (n * n) && ecount < n - 1) {
            if (edge[i][2] == 999)
                break;
            x = find(edge[i][0], parent);
            y = find(edge[i][1], parent);
            if (x != y) {
                cost += edge[i][2];
                mst[ecount][0] = edge[i][0];
                mst[ecount++][1] = edge[i][1];
                setunion(x, y, parent);
            }
            i++;
        }
        if (ecount < n - 1)
            System.out.println("The minimal spanning tree cannot be found");
        else {
            System.out.println("The minimal spanning tree cost : " + cost);
            System.out.println("The minimal spanning tree is : ");
            for (i = 0; i < n - 1; i++)
                System.out.println(mst[i][0] + " - " + mst[i][1]);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of vertices : ");
        int n = sc.nextInt();
        int i, j, k = 0;
        int[][] a = new int[n][n];
        int[][] edge = new int[n * n][3];
        System.out.println("Enter the adjacency matrix (999 - no edge) :");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
                edge[k][0] = i;
                edge[k][1] = j;
                edge[k++][2] = a[i][j];
            }
        }
        sc.close();
        java.util.Arrays.sort(edge, new java.util.Comparator<int []>() {
            public int compare(int[] a, int[] b) {
                return Integer.compare(a[2], b[2]);
            }
        });
        KruskalAlgo(edge, n);
    }
}
