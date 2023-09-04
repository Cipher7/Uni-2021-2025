import java.util.Scanner;

public class subset {
	int s[], x[];
	int d,n;
	subset(){
		s = new int[10];
		x = new int[10];
	}
	void read()
	{
		int sum=0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the total number of elements : ");
		n = sc.nextInt();
		System.out.println("Enter the set : ");
		for(int i=1;i<=n;i++)
		{
			s[i] = sc.nextInt();
		}
		System.out.println("Enter the maximum set value : ");
		d=sc.nextInt();
		for(int i=1;i<=n;i++)
		{
			sum += s[i];
		}
		if(sum < d)
			System.out.println("Subset is not possible");
		else
		{
			System.out.println("The sets are : ");
			subset_fun(0,1,sum);
		}
		sc.close();
	}
	
	void subset_fun(int S, int k, int r)
	{
		x[k] = 1;
		if(S+s[k] == d)
		{
			for(int i=1;i<=k;i++)
			{
				if(x[i] == 1)
					System.out.println(s[i]+" ");
				System.out.println();
			}
		}
		else
		{
			if(S+s[k] + s[k+1] <= d)
				subset_fun(S+s[k],k+1,r-s[k]);
		}
		if((S+r-s[k] >= d) && (S+s[k+1] <= d))
		{
			x[k] = 0;
			subset_fun(S,k+1,r-s[k]);
		}
	}
	public static void main(String[] args) {
		subset st = new subset();
		st.read();
	}

}
