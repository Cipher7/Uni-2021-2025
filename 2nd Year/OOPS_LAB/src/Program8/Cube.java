package Program8;

public class Cube implements Runnable{
		int a;
		
		Cube(int n)
		{
			a = n;
		}
		
		public void run()
		{
			//System.out.println(Thread.currentThread());
			System.out.println("Cube of the number is : " + (a*a*a));
		}
}
