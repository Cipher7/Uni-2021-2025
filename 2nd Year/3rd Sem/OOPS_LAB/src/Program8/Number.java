package Program8;

import java.util.Random;

public class Number extends Thread{
	
	public void run()
	{
		Random r = new Random();
		for(int i=0; i<5; i++)
		{
			int randInteger = r.nextInt(100);
			System.out.println("Random Integer generated is : " + randInteger);
			Thread t1 = new Thread(new Square(randInteger));
			t1.start();
			System.out.println("-------------------------------------------");
			Thread t2 = new Thread(new Cube(randInteger));
			t2.start();
			
			try
			{
				t1.sleep(1000);
			}
			catch(InterruptedException ex)
			{
				System.out.println(ex);
			}
		}
	}
}

