package Program8;

public class Square implements Runnable {
	
	int a;
	Square(int n)
	{
		a=n;
	}
	public void run()
	{
		System.out.println(Thread.currentThread());
		System.out.println("Square of the number is : " + (a*a));
	}
}
