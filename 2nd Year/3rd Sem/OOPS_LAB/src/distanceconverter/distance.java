package distanceconverter;

public class distance {

	public void milestokm(double miles)
	{
		double km = miles * 2.37;
		System.out.println("\nKM = " + km);
	}
	public void meterstokm(double meters)
	{
		double km = meters/1000;
		System.out.println("\nKM = " + km);
	}
	public void kmtomiles(double km)
	{
		double miles = km / 2.37;
		System.out.println("\nMILES = " + miles);
	}
	public void kmtometers(double km)
	{
		double meters = km * 1000;
		System.out.println("\nMETERS = " + meters);
	}
}
