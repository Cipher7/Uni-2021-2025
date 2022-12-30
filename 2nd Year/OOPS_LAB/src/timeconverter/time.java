package timeconverter;

public class time {
	
	public void mintohr(double min)
	{
		double hr = min/60;
		System.out.println("\nHOURS = " + hr);
	}
	public void sectohr(double sec)
	{
		double hr = sec/3600;
		System.out.println("\nHOURS = " + hr);
	}
	public void hrtomin(double hr)
	{
		double min = hr*60;
		System.out.println("\nMINUTES = " + min);
	}
	public void hrtosec(double hr)
	{
		double sec = hr*3600;
		System.out.println("\nSECONDS = " + sec);
	}
}
